//https://youtu.be/f97RWt_IT4U
//https://www.google.com/amp/s/www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/amp/
//This is the code from the above link.
//This is easier than the pdf provided by sir.

#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL mul_inv(LL base, LL prime){
    base = base % prime;
    for(int x=1; x<prime; x++){
        if((base*x) % prime == 1)
        {
            return x;
        }
    }
}

int main(void){
    int base = 2, prime = 5;
    cout<< mul_inv(base, prime);
    return 0;
}
