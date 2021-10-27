#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>primeList;

void sieve(ll n){
bool prime[n];
memset(prime,true,sizeof(prime));
for(ll i=2; i*i<=n; i++){
    if(prime[i]==true){
        for(ll p=i*i; p<=n; p=p+i){
        prime[p]=false;

        }
    }


}

for(int p=2; p<=n; p++){
    if(prime[p]==true){
        primeList.push_back(p);
    }
}

    for(auto it=primeList.begin(); it!=primeList.end(); it++){

//    cout<<*it<<endl;
    }

}

void primeFactorize(ll n){
for(ll i=0; primeList[i]*primeList[i]<=n ; i++){
    if(n%primeList[i]==0){
    while(n%primeList[i]==0){
    n /= primeList[i];
    cout<<"     "<<primeList[i]<<endl;

    }

    }


    }
if(n>1); cout<<"     "<<n<<endl;

}



int main()
{
    sieve(1000007);
    ll x;
    while(cin>>x && x!=-1){
    if(x<0) x*=(-1);
    primeFactorize(x);





    }

}
















