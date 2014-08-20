#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
double dp[101][10005],prob=0.0;
long long i,n,a[200],j,t,sum,count=0,p[200],total;
int main(){
     cin>>t;
     while(t--){
          for(i=0;i<101;i++)
          for(j=0;j<10005;j++)dp[i][j]=0.0;
          sum=0;
          cin>>n;
          total=0;
          for(i=1;i<=n;i++){
               cin>>a[i];total+=a[i];
          }
          for(i=1;i<=n;i++)cin>>p[i];

          for(i=1;i<=n;i++){
          sum+=a[i];
               for(j=sum;j>=a[i];j--){
                  if(i==1){
                  dp[i][0]=1-p[i]/100.0;
                  dp[i][a[i]]=p[i]/100.0;
                  break;
                  }
                  dp[i][j]=dp[i-1][j]*(1-p[i]/100.0) + (p[i]/100.0)*dp[i-1][j-a[i]];
               }
               for(j=a[i]-1;j>=0;j--){
                   if(i==1){break;}
                   dp[i][j]=dp[i-1][j]*(1-p[i]/100.0);
               }
        }
prob=0.0;
for(i=(total+1)/2;i<=sum;i++){prob+=dp[n][i];}
cout<<fixed<<setprecision(10)<<prob<<endl;
     }
     return 0;
}
