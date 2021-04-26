#include <bits/stdc++.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>
#include<string>

using namespace std;
int main()
{
    int n,i,odd=0,even=0;
    string s;

    map <char,int> pal;
    map<char,int>::iterator itr;

    cin >> s;
    //Inserting each word of the string in pal and count
    for(i=0; i<s.length(); i++)
    {
        pal[s.at(i)]++;
    }

//        for(itr = pal.begin(); itr != pal.end(); itr++){
//        cout<<itr->first<<" "<<itr->second<<endl;
//    }

    for(itr = pal.begin(); itr != pal.end(); itr++)
    {
        if(itr->second%2 == 0)
            even++;
        else
            odd++;
    }
    //If the string length is even, and all words are even, then odd==0(palindrome)
    if(s.length()%2 == 0)
    {
        if(odd == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    //If the string length is odd, and only one word is odd, then palindrome
    else
    {
        if(odd == 1)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}
