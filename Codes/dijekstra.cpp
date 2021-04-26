#include<bits/stdc++.h>
using namespace std;

#define MAX 200
#define INF 1000000

struct node{
    int val;
    int cost;

};

vector <node> Graph[MAX];
bool visited[MAX];
int dist[MAX];

void reset()
{
    for (int i= 0;i<MAX;i++)
    {
        Graph[i].clear();
        visited[i]=0;
        dist[i] = INF;
    }

}

//a comperator two compare between two nodes
class cmp{
public:
    bool operator() (node &A, node &B){
        if (A.cost > B.cost)
            return true;
        return false;

    }

};

void dijkstra(int source)
{
    priority_queue<node, vector<node>, cmp> PQ;
    PQ.push({source,0});

    while(!PQ.empty()){
        node current = PQ.top();
        PQ.pop();

        int val = current.val;
        int cost = current.cost;

        //it means allready visited
        if(visited[val]==1)
            continue;
        dist[val] = cost;//final cost
        visited[val] = 1;//make it visited

        //push the next nodes
        for(int i =0;i <Graph[val].size();i++)
        {
            int next = Graph[val][i].val;
            int nextCost = Graph[val][i].cost;

            if(visited[next]==0){
                PQ.push({next,cost + nextCost});
            }
        }

    }


}

int main()
{

    reset();
    int nodes, edges;
    cin>>nodes>>edges;

    //u->start node
    //v-> end node
    //w-> cost

    for(int i=1;i<=edges;i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        Graph[u].push_back({v,w});

    }

    cout << "Enter source :"<<endl;
    int source;

    cin >> source;

    dijkstra(source);

    //printing distance
    for (int i=1;i<=nodes; i++)
    {
        cout << "Node: "<<i ;
        if(dist[i] = INF)
            cout<< " Not reachable"<<endl;
        else
            cout<<" Distance "<< dist[i] << endl;
    }

    return 0;
}
