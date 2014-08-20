#include <iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
typedef long long ll;
#define MAX 50005
int main()
{
ll n,k,t,ct=0,m,i,j,x[MAX],y[MAX],d;
ll mini=1000000,i1,j1;
cin>>n;
for(i=0;i<n;i++){
   cin>>x[i]>>y[i];
}
mini=pow(y[1]-y[0],2)+pow(x[1]-x[0],2);
for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            d=pow(y[j]-y[i],2)+pow(x[j]-x[i],2);
            if(mini>d ){mini=d;i1=i;j1=j;}
        }
    }
    cout<<i1<<" "<<j1<<" ";
    printf("%0.6f\n",sqrt(mini));

 return 0;
}
