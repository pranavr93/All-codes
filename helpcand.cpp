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
long long t,n,m,i;
//pre-processing
fact[0]=1;
for(i=1;i<=NLIMIT;i++)
{
     fact[i]=mod(fact[i-1]*i);
}
     cin>>t;
     //We meed to find n+m C n mod p
     FILE *f;
     f=fopen("input1.txt","w");

     for(i=1;i<=3000;i+=3)
     {
     fprintf(f,"%d %d\n",9898,i);
     }


     for(i=4000;i<=10000;i+=2)
     {
     fprintf(f,"%d %d\n",4531,i);
     }
     for(i=1;i<=10000;i+=7)
     {
     fprintf(f,"%d ",i);
     fprintf(f,"%d\n",7777);
     }
     for(i=1;i<=10000;i++)
     {
     fprintf(f,"%d ",i);
     fprintf(f,"%d\n",9999);
     }
     for(i=1000;i<=5000;i+=5)
     {
     fprintf(f,"%d ",i);
     fprintf(f,"%d\n",5200-i);
     }
    fclose(f);

     while(t--){

     cin>>n>>m;
     n--;m--;
     cout<< mod(fact[n+m] * degree( mod(fact [n]*fact[m]),p-2 ))<<endl;
     }

}

     
     
