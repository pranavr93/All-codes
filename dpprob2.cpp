/* Author : Pranav
BITS PILANI Hyderabad Campus */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string.h>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define N 100005
#define mod 1000000007
long long dp[300100]={0}, dpfront[300100]={0},dpback[300100]={0},i,n,a[300100]={0},max1,max2,max3=-5,sum,k,index;
int main()
{
cin>>n>>k;
dp[0]=0;
for(i=1;i<=n;i++){
     cin>>a[i];
     dp[i]=dp[i-1]+a[i];
}
dpfront[0]=-2;
for(i=1;i<=n;i++){
     if(i+k-1<=n){
     dpfront[i]=dp[i+k-1]-dp[i-1];
     dpfront[i]=max(dpfront[i],dpfront[i-1]);
     }
}
//for(i=1;i<=n;i++){cout<<dp[i]<<" ";}cout<<endl;
for(i=1;i<=n;i++){
     if(i+k-1<=n){
     dpfront[i]=dp[i+k-1]-dp[i-1];
     dpback[i]=dp[i+k-1]-dp[i-1];
     dpfront[i]=max(dpfront[i],dpfront[i-1]);
     }
}
//for(i=1;i<=n;i++){cout<<dpfront[i]<<" ";}cout<<endl;
dp[n+1]=0;

for(i=n-k+1;i>=0;i--){
     if(i-k+1>=1){
     dpback[i]=dp[i+k-1]-dp[i-1];
     dpback[i]=max(dpback[i],dpback[i+1]);
     }
}
//for(i=1;i<=n;i++){cout<<dpback[i]<<" ";}cout<<endl;
max3=-5;



for(i=1;i<=n-k;i++)
{    sum=0;
     sum=dpfront[i]+dpback[i+k];
     if(sum>max3){max3=sum;max1=dpfront[i];max2=dpback[i+k];index=i;}
}



//cout<<max1<<" "<<max2<<endl;
//cout<<index<<endl;
for(i=1;i<=index;i++)
{
     if(dp[i+k-1]-dp[i-1]==max1){cout<<i<<" ";break;}
}

for(i=index+k;i<=n;i++)
{
     if(dp[i+k-1]-dp[i-1]==max2){cout<<i<<" ";break;}
}



  return 0;
}

