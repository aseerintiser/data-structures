#include <bits/stdc++.h>

using namespace std;

vector <int> graph[100];

int nodeCount,edge;

void printGraph(vector<int>graph[],int nodesNumber)
{
    for(int i=0;i<nodesNumber;i++)
    {
        cout<<i<<" -> ";

        for(int j=0;j<graph[i].size();j++)
        {
            cout<<graph[i][j]<<"  ";
        }
        cout<<endl;
    }

}

void printPathRecursive(int parent[],int u)//here first source will print
{
    if (parent[u]!=-1)
        printPathRecursive(parent,parent[u]);
    printf("%d\n",u);

}

void printPathIterative(int parent[],int u)
{

    stack <int> s;
    while(parent[u] != -1)
    {
        s.push(u);
        u = parent[u];
    }
    while(!s.empty())
    {
        int v = s.top();
        s.pop();
        printf("%d\n",v);
    }

}


void bfs(vector<int>graph[],int source,int nodeNumber)
{
    int level[nodeNumber];
    int parent[nodeNumber];
    bool visited[nodeNumber];

    queue <int> q;
    q.push(source);
    visited[source] = true;

    level[source] = 0;
    parent[source] = -1;
    while(!q.empty())
    {

        int u= q.front();
        q.pop();
        for(v : graph[u])
        {
            if(!visited[v])
            {
                visited[v]=true;
                level[v] = level[u]+1;
                parent[v] = u;
                q.push(v);
            }
        }

    }

    //printPathRecursive(parent,9);///here 9 is the node to where we will need a path(source to path of 9)

    printPathIterative(parent,8);

    //cout<<level[10];

}


int main()
{

    int nodeA,nodeB;

    cin>>nodeCount>>edge;




    while(edge--)
    {
        cin>>nodeA>>nodeB;
        graph[nodeA].push_back(nodeB);
        graph[nodeB].push_back(nodeA);
    }

    printGraph(graph,nodeCount);

    bfs(graph,1,nodeCount);

    return 0;
}

/*input
10 9
1 2
1 4
1 3
2 6
4 7
3 8
6 10
7 9
8 5
*/
