#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, n; cin>>test;
    while(test--)
    {
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++)
        {
            int index=i, cnt=1, num;
            num = arr[i];
            while(num!=index+1)
            {
                cnt++;
                num = arr[num-1];
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
}
