#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    while(1)
    {
        cout<<"Enter the number you want to find the divisor: ";
        cin>>n;
        for(int divisor=1; divisor<=(n/2); divisor++)
        {
            if(n%divisor==0) cout<<"     "<<divisor<<endl;


        }



    }
}
