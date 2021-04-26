#include <bits/stdc++.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>
#include<string>

using namespace std;

int main()
{
    int i,flag=0;
    string s1, s2, s3;

    map <char,int> name, cnt;
    map<char,int>::iterator itr;

    cin >> s1 >> s2 >> s3;
    //Inserting each letter of s1 & s2 in name and count them
    for(i=0; i<s1.length(); i++)
        name[s1.at(i)]++;

    for(i=0; i<s2.length(); i++)
        name[s2.at(i)]++;

    //Counting each letter of s3 and inserting in cnt -> first
    for(i=0; i<s3.length(); i++)
        cnt[s3.at(i)]++;

//    for(itr = name.begin(); itr != name.end(); itr++){
//        cout<<itr->first<<" "<<itr->second<<" "<<cnt[itr->first]<<" "<<cnt[itr->second]<<endl;
//    }

    //Comparing name -> second and cnt -> first; if there is less letter in cnt -> first(pile), then NO; but there can have more letters in cnt -> first(pile)
    for(itr = name.begin(); itr != name.end(); itr++)
    {
        if(itr->second > cnt[itr->first])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
