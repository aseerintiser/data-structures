#include <bits/stdc++.h>

using namespace std;




vector <int> graph[20];


void printGraph(vector<int>graph[],int n)
{

    cout<<"The graph is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{



    int nodeA,nodeB;
    int nodeNumber,edgeNumber;
    cin>>nodeNumber>>edgeNumber;


    while(edgeNumber--)
    {
        cin>>nodeA>>nodeB;
        graph[nodeA].push_back(nodeB);
        graph[nodeB].push_back(nodeA);


    }





    printGraph(graph,5);




}










