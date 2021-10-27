#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n1,n,c,sq;

    bool arr[1000001];
    memset(arr,true,sizeof(arr));
    arr[0]=arr[1]=true;
    for(ll i=2; i*i<=1000001; i++)
    {
        if(arr[i]==true)
        {
            for(ll p=i*i; p<=1000001; p+=i)
            {
                arr[p] = false;


            }

        }


    }


//    for(ll i=1; i<=1000001; i++){
//    if(arr[i]) cout<<i<<" ";
//
//
//    }

    cout<<"Enter the numbers you want to count Exact Three divisor: "<<endl;

    cin>>n1;

    cout<<"Enter the numbers: "<<endl;

    while(n1--){
    cin>>n;
//    cout<<n;
    sq = sqrt(n);
    if(sq*sq==n && n!=1){
    if(arr[sq]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }
    else cout<<"NO"<<endl;


    }



}
