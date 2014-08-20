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
#define N 1000006
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
ll dp[N];
ll prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int main(){
ll cube[101],t,i,k,ct,n,flag,j;
for(i=1;i<=101;i++){
    cube[i]=i*i*i;
}

for(i=2;i<=101;i++){
    flag=0;
    for(j=0;j<25;j++){
        if(i%prime[j]==0&&i!=prime[j])
        {flag=1;}
    }
    if(flag==1){continue;}
    for(k=0;k<=N;k+=cube[i]){
        dp[k]=-1;
    }
}
dp[1]=0;
ct=1;
for(i=1;i<=N;i++){
    if(dp[i]==0){
        dp[i]=ct++;
    }
}
scan(t);
ct=1;
while(t--){
    scan(n);
    if(dp[n]!=-1){
        printf("Case %lld: %lld\n",ct,dp[n]);

    }
    else{
        printf("Case %lld: Not Cube Free\n",ct);
    }
    ct++;
}



return 0;
}
