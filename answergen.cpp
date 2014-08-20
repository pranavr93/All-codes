#include<iostream>
#include<stdio.h>
using namespace std;
#define p 1000000009
#define NLIMIT 10005
long long fact[NLIMIT];
long long mod(long long k)
{
    return k%p;
}
long long degree(long long a, long long k)
{        //returns a^k mod p
long long temp,cur;
     temp = 1;
     cur = a;
     while (k)
     {
          if (k%2)
          {
               temp = mod(temp * cur);
          }
     k /= 2;
     cur = mod(cur * cur) ;
     }
  return temp;
}
int main()
{
long long n,m,i,t=10000;
//pre-processing
fact[0]=1;
for(i=1;i<=NLIMIT;i++)
{
     fact[i]=mod(fact[i-1]*i);
}
    // cin>>t;
     //We meed to find n+m C n mod p
     FILE *f,*f2;
     f=fopen("input1.txt","r");
     f2=fopen("output1.txt","w");
     while(t--){
          cout<<"hi";
     fscanf(f,"%d%d",&n,&m);
     cout<<n<<" "<<m;
     //cin>>n>>m;
     n--;m--;

    fprintf(f2,"%lld\n",mod(fact[n+m] * degree( mod(fact[n]*fact[m]),p-2 )));
     }
     fclose(f2);

}



