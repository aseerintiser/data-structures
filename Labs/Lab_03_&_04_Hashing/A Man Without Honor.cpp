#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include<iterator>

using namespace std;

int main()
{
    int index = 0;
    char ch,str[200];

    map<string, int> dictionary;
    map<string, int>::iterator it;

    while(ch = getchar())
    {
        if(ch == EOF)
            break;
        if(ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
        if(ch >= 'a' && ch <= 'z')
        {
            str[index++] = ch;
        }
        else
        {
            str[index++] = '\0';
            if(index > 1)
            {
                dictionary[str];
            }
            index = 0;
        }
    }
    for(it = dictionary.begin(); it != dictionary.end(); it++)
        cout << it -> first << endl;
    return 0;
}
