//http://www.codechef.com/JUNE13/problems/LEMOUSE
//Author : pranavr93
#include<iostream>
using namespace std;
int min(int a,int b)
{
     if(a<b){return a;}
     else {return b;}
}
int main()
{
     int t,n,m,i,j;
     int a[105][105],dp[105][105],dir[101][101],p,q;
     cin>>t;
     while(t--)
     {
     cin>>n>>m;
     for(i=0;i<105;i++){for(j=0;j<105;j++){dp[i][j]=0;dir[i][j]=-1;a[i][j]=0;if(i==n&&j==0){cout<<a[n][0];}} }
     cout<<a[n][0];
     for(i=0;i<n;i++){for(j=0;j<m;j++){cin>>a[i][j]; } }

     //Filling the first row of the DP array
     dp[0][0]=a[0][1]+a[1][0];

     for(i=1;i<m-1;i++)
     {
          dp[0][i]=a[1][i]+a[0][i+1] + dp[0][i-1];
          dir[i][j]=0;
     }
     dp[0][m-1]=dp[0][m-2]+a[1][m-1];
     dir[0][m-1]=0;

     //Filling the first column od DP array

     for(i=1;i<n;i++)
     {
          dp[i][0]=dp[i-1][0]+a[i][1]+a[i+1][0];
          dir[i][j]=1;
     }
    for(i=0;i<n;i++){for(j=0;j<m;j++){cout<<dp[i][j]<<" ";}cout<<endl;}
     //dir[i][j]=0 implies i,j has been arived from left
     //dir[i][j]=1 implies i,j has been arived from top
     for(i=1;i<n;i++)
     {
          for(j=1;j<m;j++)
          {
               //For top left
               if(dir[i-1][j]==1)
               {
                p=dp[i-1][j]+a[i+1][j]+a[i][j+1];
               }
               // From top top
               else
                    {
                         p=dp[i-1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1];
                    }

               // From left left
               if(dir[i][j-1]==0)
               {
                    q=dp[i][j-1]+a[i-1][j]+a[i+1][j]+a[i][j+1];
               }
               //From left top
               else
                    {
                      q=dp[i][j-1]+a[i+1][j]+a[i][j+1];
                    }

          dp[i][j]=min(p,q);
          }
     }
     cout<<dp[n-1][m-1]<<endl;

     }
     return 0;
}
