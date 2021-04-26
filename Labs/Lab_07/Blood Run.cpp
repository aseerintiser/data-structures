#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int parent[100000];
int size[100000];
map<string, int> m;

void make_set(int i)
{
    parent[i] = i;
    size[i] = 1;
}

int find_set(int i)
{

    if (parent[i] == i)
        return i;

    return parent[i] = find_set(parent[i]);

}

void union_sets(int a, int b)
{

    a = find_set(a);
    b = find_set(b);
    if (a != b) {

        if (size[b] > size[a]) {
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
        parent[b] = a;
        size[a] += size[b];
    }

}

int main()
{

    int test;
    cin >> test;

    while(test--) {
        int n,arr[100000];
        cin >> n;
        string str1,str2;
        int val = 0;

        m.clear();

        for (int i = 0; i < n; i++) {
            cin>>str1>>str2;

            //Inserting strings in the map
            if(m.find(str1)==m.end()){
                m[str1]=++val;
                make_set(val);
            }

            if(m.find(str2)==m.end())
            {
                m[str2]=++val;
                make_set(val);
            }

            union_sets(m[str1],m[str2]);

            int index=find_set(m[str2]);  //finding the parent

            arr[i]=size[index];  //storing the size of the parent
        }


        for (int i = 0; i < n; i++) {
            cout<<arr[i]<<endl;
        }

    }

    return 0;
}
