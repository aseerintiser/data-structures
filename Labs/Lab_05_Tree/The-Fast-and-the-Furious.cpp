#include <bits/stdc++.h>
using namespace std;
int main(){
    long int t, i;
    scanf("%ld", &t);
    for(i=0; i<t; i++){
        long int n;
        multiset <long int> order;
        multiset <long int> :: iterator itr;
        while(true){
            scanf("%ld", &n);
            if(n == 0)
                break;
            else if(n < 0){
                printf("%ld\n", *itr);
                if(order.size()%2 == 0)
                    order.erase(itr++);
                else
                    order.erase(itr--);
            }
            else{
                order.insert(n);
                if(order.size() == 1){
                    itr = order.begin();
                }
                else{
                    if(order.size()%2 == 0){
                        if(n < *itr)
                            itr--;
                    }
                    else{
                        if(n >= *itr)
                            itr++;
                    }
                }
            }
        }
    }
    return 0;
}
