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
    ll n,i,j,m,k,a,b;

    vector<pair<ll,ll> > v;
    ll dp[100005]={0};
    
    
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        v.pb(mp(a,b));
        dp[a]++;
    }
    for(i=0;i<n;i++){
        cout<<(n-1)+dp[v[i].second]<<" "<<(n-1)- dp[v[i].second]<<endl;
    }
    
}


