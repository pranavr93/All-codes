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
#define N 7000
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;
   ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}

int main(){
    ll n,i,j,m,k;
    cin>>n;
    vector<ll> v(200,0);
    for(i=0;i<n;i++){
        cin>>k;
        v[k]++;
    }
    ll dp[1000]={0};
    dp[1]=1*v[1];dp[0]=0;
    for(i=2;i<=n;i++){
        dp[i]=max(dp[i-2]+(v[i]*i),dp[i-1]);
    }
    cout<<dp[n];
}


