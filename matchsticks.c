#include<iostream>
using namespace std;
int main()
{
     long long n,b[100005]={0},i,left,right,q,min;
     float c[100005],max;
     cin>>n;
     for(i=0;i<n;i++){cin>>b[i];}
     cin>>q;
     while(q--)
     {
          cin>>left>>right;
          min=a[left];
          for(i=left+1;i<=right;i++)
          {
               if(a[i]<min){min=a[i];}
          }
          for(i=0;i<left;i++)
          {
          c[i]=b[i]+min;
          }
          for(i=right+1;i<n;i++)
          {
          c[i]=b[i]+min;
          }
          for(i=left;i<=right;i++)
          {
          c[i]=(float)min+(b[i]-min)/2.0;
          }
          max=c[0];
          for(i=0;i<n;i++)
          {
               if(max>c[i]){max=c[i];}
          }
          cout<<max;
          
     }
return 0;
}
