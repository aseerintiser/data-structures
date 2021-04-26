#include <bits/stdc++.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    int t, i, j, n, input;

    map<int,int> hash_table;
    map<int,int>::iterator itr;

    cin >> t;
    for(i=0; i<t; i++)
    {
        int mx = 0;
        cin >> n;

        //Inserting all elements in hash_table and count them
        for(j=0; j<n; j++)
        {
            cin >> input;
            hash_table[input]++;
        }

        //Traversing and find the max
        for(itr = hash_table.begin(); itr != hash_table.end(); itr++)
        {
            mx = max(mx, itr -> second);
        }
        cout << (n - mx) << endl;
        hash_table.clear();
    }

//        for(itr = hash_table.begin(); itr != hash_table.end(); itr++){
//        cout<<itr->first<<" "<<itr->second<<endl;
//    }
    return 0;
}
