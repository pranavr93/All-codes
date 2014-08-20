#include<iostream>
#include<stdio.h>
using namespace std;
int min2(int i,int j)
{
     if(i>=j){return j;}
     else{return i;}
}
int min(int i,int j,int k,int l)
{
     return min2(min2(i,j),min2(k,l));
}
int main()
{
     int count=0,i,n,p[1000002],q[1000002],cost[100100]={0},final[100100]={0};
     int x[100100]={0},y[100100]={0},mini ,a,b,sum=0,m,k1,k2;
     //scanint(&n);
     //scanint(&m);
     scanf("%d",&n);
     scanf("%d",&m);
     for(i=1;i<=m;i++)
     {
          scanf("%d",&p[i]);
          scanf("%d",&q[i]);
          //scanint(&p[i]);
          //scanint(&q[i]);
     }
     mini=11000;
     for(i=1;i<=n;i++)
     {
          scanf("%d",&cost[i]);
          //scanint(&cost[i]);
          if(cost[i]<mini&&cost[i]!=-1){mini=cost[i];}
     }
cout<<mini<<endl;
     for(i=1;i<=m;i++)
     {
          a=p[i];b=q[i];
          
           k1=a;
           while(1)
           {
               if(y[k1]==0){break;}
               k1=y[k1];
           }
           k2=b;
           while(1)
           {
               if(y[k2]==0){break;}
               k2=y[k2];
           }
           y[k2]=k1;
           x[k1]=1;final[k1]=min(cost[k1],cost[k2],cost[a],cost[b]);
     }
     for(i=1;i<=n;i++)
     {
          if(final[i]>0){ count++;
          sum+=final[i];
          }
     }
     if(count==1){cout<<1<<endl;}
     else
     {cout<<sum + (count-2)*mini;}
return 0;
}









             /*
          if(x[a]==0&&x[b]==0){x[a]=1;final[a]=min(cost[a],cost[b]);y[b]=a;}
          else if(x[a]!=0&&x[b]==0)
          {

          }
          else if(x[a]==0&&x[b]!=0)
          {
               k=b;
               while(1)
               {
                    if(y[k]==0){break;}
                    k=y[k];
               }
               final[b]=min(cost[a],cost[b]);y[a]=b;
          }
          else if(x[a]!=0&&x[b]!=0)
          {
               final[a]=min(cost[a],cost[b]);y[b]=a;
          }
          */