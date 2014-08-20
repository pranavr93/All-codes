#include<iostream>
using namespace std;
int min(int a, int b)
{
     if(a>b){return b;}
     else{return a;}
}
int max(int a ,int b,int c)
{
     if(a>b&&a>c){return a;}
     else if(b>a&&b>c){return b;}
     else {return c;}
}
int main()
{
     int a[21],b[21],c[21];
     int dpa[21],dpb[21],dpc[21],i,n,t;
     scanf("%d",&&t);
     while(t--)
     {
          scanf("%d",&n);
          for(i=0;i<n;i++)
          {
               scanf("%d%d%d",&a[i],&b[i],&c[i]);
               if(i!=0)
               {
               dpa[i]=min(dpb[i-1],dpc[i-1])+a[i];
               dpb[i]=min(dpa[i-1],dpc[i-1])+b[i];
               dpc[i]=min(dpb[i-1],dpa[i-1])+c[i];
               }
               else{   dpa[0]=a[0];dpb[0]=b[0];dpc[0]=c[0];}
          }
          printf("%d\n",max(dpa[n-1],dpb[n-1],dpc[n-1])
     }
          
     
     return 0;
}
