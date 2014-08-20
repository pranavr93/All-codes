#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
     long long t,n,avg=0,sum=0,i,k,surplus=0;
     scanf("%lld",&t);
     while(t--)
     {
          scanf("%lld",&n);
          scanf("%lld",&k);
          avg=k;
          sum=k;
          surplus=0;
          for(i=1;i<n;i++)
          {
               scanf("%lld",&k);
               if(k<avg)
               {
                    if(k+surplus>=avg){surplus-=(avg-k);}
                    else{surplus=((avg*i)+k)%(i+1);avg=((avg*i)+k)/(i+1);}
               }
               else
               {
                   surplus+=(k-avg);

               }
          }
          printf("%lld\n",avg);
     }
     return 0;
}
