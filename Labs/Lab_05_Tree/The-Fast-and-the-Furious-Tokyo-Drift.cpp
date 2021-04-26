#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q, i;

    set <int> order;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> Q;
    for(i=0; i<Q; i++)
    {
        int operation;
        cin >> operation;
        if(operation == 1)
        {
            int v;
            cin >> v;
            order.insert(v);
        }
        else if(operation == 2)
        {
            int v;
            cin >> v;
            order.erase(order.find(v));
        }
        else if(operation == 3)
        {
            cout << *order.begin() << "\n";
        }
    }
    return 0;
}
