#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, i, input, cnt = 0;
    priority_queue <int, vector<int>, greater<int>> cookies;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(i=0; i<n; i++){
        cin >> input;
        cookies.push(input);
    }
    while(cookies.top() < k){
        int l1, l2;
        if(cookies.size() < 2){
            cout << -1 << endl;
            exit(0);
        }
        l1 = cookies.top();
        cookies.pop();
        l2 = cookies.top();
        cookies.pop();
        cookies.push(l1 + 2*l2);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
