#include <bits/stdc++.h>

using namespace std;

void dfs(int source);
bool visited[5];

vector <int> graph[20];




int main()
{


    vector <int>::iterator it;
    int nodeA,nodeB;
    int nodeNumber,edgeNumber;
    cin>>nodeNumber>>edgeNumber;


    while(edgeNumber--)
    {
        cin>>nodeA>>nodeB;
        graph[nodeA].push_back(nodeB);
        graph[nodeB].push_back(nodeA);


    }

    dfs(0);


    for(int i=0;i<nodeNumber;i++)
    {
        if(visited[i] == 1)
            cout<<i<<" node is visited "<<endl;
        else if(visited[i]!=1)
            cout<<i<<" node is not visited "<<endl;
    }


    //printGraph(graph,5);




}

void dfs(int source)
{
    visited[source] = 1;
    for(int i=0;i<graph[source].size();i++){
        int next = graph[source][i];
        if(visited[next] == 0)
            dfs(next);


    }

}






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



