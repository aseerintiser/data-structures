//code provided by sir with multiplicative inverse function from geeks for geeks
//https://www.google.com/amp/s/www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/amp/
//Unfortunately gets TLE

#include <bits/stdc++.h>
using namespace std;

#define LL long long

class RollingHash{
private:
    LL hash=0;
    LL mul=1;
    LL base=256;
    LL p=100000007;
    LL ibase=mul_inv(base, p);
    LL basep=base*p;
    LL mul_inv(LL base, LL prime){
        base = base % prime;
        for(int x=1; x<prime; x++){
                if((base*x) % prime == 1){
                    return x;
                }
        }
    }
public:
    void append(char c){
        hash = (hash * base + c) % p;
        mul = (mul * base) % p;
    }

    void skip(char c){
        mul = (mul* ibase)%p;
        hash = (hash - c * mul + basep)%p;
    }

    LL hashValue(){
        return hash;
    }

};

int main() {

    return 0;
}
