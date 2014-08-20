//http://www.codechef.com/JUNE13/problems/LEMOUSE
//Author : pranavr93
#include<iostream>
#include<stdio.h>
using namespace std;
int min(int a,int b)
{
     if(a<b){return a;}
     else {return b;}
}
int main()
{
     int t,n,m,i,j;
     int a[105][105],dp[105][105],dir[105][105],p,q,p1,p2,q1,q2,flag=0;
     cin>>t;
     while(t--)
     {flag=0;
     cin>>n>>m;
     for(i=0;i<105;i++){for(j=0;j<105;j++){dp[i][j]=0;dir[i][j]=-1;} }
    // cout<<a[n][0]; 
     for(i=0;i<n;i++){for(j=0;j<m;j++){scanf("%1d",&a[i][j]); } }
     if(a[0][0]==1){flag=1;}
     for(i=0;i<m;i++){a[n][i]=0;}
     for(i=0;i<n;i++){a[i][m]=0;}
     //Filling the first row of the DP array
     dp[0][0]=a[0][1]+a[1][0];
     
     for(i=1;i<m-1;i++)
     {
          dp[0][i]=a[1][i]+a[0][i+1] + dp[0][i-1];
          dir[0][i]=0;
     }
     dp[0][m-1]=dp[0][m-2]+a[1][m-1];
     dir[0][m-1]=0;
     
     //Filling the first column od DP array
     
     for(i=1;i<n;i++)
     {
          dp[i][0]=dp[i-1][0]+a[i][1]+a[i+1][0];
          dir[i][0]=1;
     }
    
     //dir[i][j]=0 implies i,j has been arived from left
     //dir[i][j]=1 implies i,j has been arived from top
     for(i=1;i<n;i++)
     {
          for(j=1;j<m;j++)
          {
               //For top left
               if(dir[i-1][j]==0)
               {
                p=dp[i-1][j]+a[i+1][j]+a[i][j+1];
               }
               // From top top
               else if(dir[i-1][j]==1)
                    {
                         p=dp[i-1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1];
                    }
               else if(dir[i-1][j]=2)
               {
                      p=dp[i-1][j]+a[i+1][j]+a[i][j+1];
               }
               
               // From left left
               if(dir[i][j-1]==0)
               {
                    q=dp[i][j-1]+a[i-1][j]+a[i+1][j]+a[i][j+1];
               }
               //From left top
               else if(dir[i][j-1]==1)
                    {
                      q=dp[i][j-1]+a[i+1][j]+a[i][j+1];                    
                    }
               else if(dir[i][j-1]==2)
               {
                    q=dp[i][j-1]+a[i+1][j]+a[i][j+1];   
               }
               
          dp[i][j]=min(p,q);
          if(p==q){dir[i][j]=2;}
          if(p<q){dir[i][j]=1;}
          else if(q<p){dir[i][j]=0;}
          }
     }
   // for(i=0;i<n;i++){for(j=0;j<m;j++){cout<<dp[i][j]<<"  ";}cout<<endl;}
     cout<<dp[n-1][m-1]+flag<<endl;

     }
     return 0;
}