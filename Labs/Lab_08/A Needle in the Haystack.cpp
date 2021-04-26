#include <bits/stdc++.h>
using namespace std;

#define LL long long

class RollingHash
{
private:
    LL hash = 0;
    LL multiplier = 1;
    LL base = 256;          ///taken based on the ascii values
    LL prime = 1000000007;
    LL inverseBase = mul_inv(base, prime);  ///getting inverse of base using mul_inv (multiplicative inverse) function
    LL basePrime = base * prime;

    LL mul_inv(LL a_base, LL b_prime )
    {
        LL b0 = b_prime,t, q;
        LL x0 = 0, x1 = 1;

        if (b_prime == 1)
        {
            return 1;
        }

        while (a_base > 1)
        {
            q = a_base/b_prime;
            t = b_prime, b_prime = a_base % b_prime, a_base = t;
            t = x0, x0 = x1 - q * x0, x1 = t;
        }

        if (x1 < 0)
        {
            x1 = x1 + b0;
        }

        return x1;

    }

public:
    void append(char c)
    {
        hash = (hash * base + c) % prime;   ///calculates hash
        multiplier = (multiplier * base) % prime;   ///changes multiplier

    }

    void skip(char c)
    {
        multiplier = (multiplier * inverseBase ) % prime;      ///changes multiplier
        hash = (hash - c * multiplier + basePrime) % prime;   ///calculating new hash value by minus the skip character
    }

    LL hashValue()
    {
        return hash;
    }

};


int main()
{
    int pattern_size;
    while (cin >> pattern_size)   ///Gives a whitespace at the end of test case, whitespace has no pattern size
    {                             ///so comes auto zero, loop ends
        string pattern, String;
        cin >> pattern >> String;

        int noOfPattern = 0, position[String.size()]; ///declaring full string sized array

        RollingHash rs, rp;   ///creating Rolling Hash object for string(rs) and pattern(rp)

        ///Initially appending pattern sized characters to both rs & rp
        for (int i = 0; i < pattern.size(); i++)
        {
            rs.append(String[i]);
            rp.append(pattern[i]);
        }

        ///Checking if rs & rp's hash values are matched
        ///and if matched, then checks character by character if 'pattern' substring matches 'string'
        if (rp.hashValue() == rs.hashValue() && pattern == String.substr(0, pattern.size()))
        {
            position[noOfPattern] = 0;   ///Saving the index of the pattern in 'position' array, initially 0
            noOfPattern++;
        }

        ///Then we will roll the window
        for (int i = pattern.size(); i < String.size(); i++)
        {
            rs.skip(String[i - pattern.size()]);  ///Removes the first character
            rs.append(String[i]);                 ///Appends new character
            ///Again checks if hash values are matched and 'pattern' substring matches 'string'
            if (rp.hashValue() == rs.hashValue() && pattern == String.substr (i - pattern.size() + 1, pattern.size()))
            {
                //ababab ab
                //   i
                // i
                //  i
                position [noOfPattern] = i - pattern.size() + 1;   ///Saving the index of the pattern in 'position' array
                noOfPattern++;
            }
        }
        if (noOfPattern != 0)
        {
            //cout << noOfPattern << endl;
            for (int i = 0; i < noOfPattern; i++)
            {
                ///All the starting index of repetition is now at 'position' array
                cout << position [i] << endl;
            }
        }
        else
        {
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

