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
#define N 5000
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;
   ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
   int a[N][N];
    int dp[N][N];
int main(){

     ll t;
    cin>>t;
    while(t--){
            ll n,i,j,m,k,b;
    ll maxim=-1;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
           a[i][j]=0;
           dp[i][j]=0;
        }
    }
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(i=1;i<=m;i++){dp[0][i]=a[0][i];
    if(a[0][i]>maxim){maxim=a[0][i];}
    }
    for(i=1;i<n;i++){
        for(j=1;j<=m;j++){
            dp[i][j]=a[i][j]+max(max(dp[i-1][j-1],dp[i-1][j]),dp[i-1][j+1]);
            if(dp[i][j]>maxim){maxim=dp[i][j];}
        }

    }
    cout<<maxim<<endl;
    }


}


