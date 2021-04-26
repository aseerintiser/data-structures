#include <bits/stdc++.h>
#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    while(1)
    {
        int n, i, j, course_number;

        vector <int> courses;
        map <vector <int>, int> hash_table;
        map <vector <int>, int>::iterator itr;

        cin >> n;
        if(n == 0)
        {
            exit(0);
        }

        for(i=0; i<n; i++)
        {
            //Taking course inputs and pushing it in vector
            for(j=0; j<5; j++)
            {
                cin >> course_number;
                courses.push_back(course_number);
            }

            sort(courses.begin(), courses.end());

            hash_table[courses]++;         //Traversing keys of map and increase (count) values
            courses.clear();        //Clearing map keys
        }

        int mx = 0, same_mx = 0;
        for(itr = hash_table.begin(); itr != hash_table.end(); itr++)
        {
            mx = max(mx, itr->second);
        }

        for(itr = hash_table.begin(); itr != hash_table.end(); itr++)
        {
            if(itr->second == mx)
            {
                same_mx++;          //Counting how many max values are there, there can be same max values more than one
            }
        }
        cout << (mx * same_mx) << endl;
        hash_table.clear();
    }
    return 0;
}

