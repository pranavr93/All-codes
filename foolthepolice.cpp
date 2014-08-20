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
#include <cstring>
//#include <sstream>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define pop pop_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define N 1000
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define scan(x) scanf("%lld",&x);
#define print(x) printf("%lld",x);
typedef long long ll;
vector<ll> stacks;
vector< pair<int,int> > y;
typedef pair <int, int> paint;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}

int main(){
int dp[N][N],a[N][N],b[N][N],t,n,j,i,k,mini,time,k2,dp2[N][N],mini2;
cin>>t;
while(t--){
    cin>>n;cin>>time;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>b[i][j];

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];

    dp[1][1]=0;dp2[1][1]=0;
    for(i=2;i<=n;i++){
        mini=INF;
        for(j=1;j<i;j++){
            k=dp[1][j]+a[j][i];
            k2=dp2[1][j]+b[j][i];
            if(k<mini){mini=k;mini2=k2;}
        }
        dp[1][i]=mini;
        dp2[1][i]=mini2;
    }
    if(dp2[1][n]<=time)
    cout<<dp[1][n]<<" "<<dp2[1][n]<<endl;
    else{cout<<"-1\n";}
}
return 0;
}
