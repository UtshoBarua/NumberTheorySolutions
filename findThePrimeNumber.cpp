#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Put the number that you want to check: ";
    bool isprime=true;
    cin>>n;
    for(int divisor=2; divisor<=(n/2); divisor++){

    if(n%divisor==0){
    isprime = false;
    break;
    }

    }

    if(isprime) cout<<"This is a prime number";
    else cout<<"This is not a prime number";
}
