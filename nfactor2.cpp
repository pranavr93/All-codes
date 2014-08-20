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
#define N 100100
#define INF 1000000
#define mod 100000
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define scan(x) scanf("%lld",&x);
#define print(x) printf("%lld\n",x);
typedef long long ll;
vector<ll> v[11];
vector< pair<int,int> > y;
typedef pair <int, int> paint;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}
ll prime[N];
int main(){
ll i,j,t,low,high,a,b,n;
    for(i=2;i<N;i++){
        if(prime[i]!=0){continue;}
        //else{prime[i]=1;}
        for(j=i;j<N;j+=i){
            prime[j]++;
        }
    }
    for(i=1;i<N;i++){
        v[prime[i]].pb(i);
    }
    scan(t);
    while(t--){
        scan(a);scan(b);scan(n);
        low=lower_bound(v[n].begin(),v[n].end(),a)-v[n].begin();
        high=upper_bound(v[n].begin(),v[n].end(),b)-v[n].begin();
        print(high-low);
    }

return 0;
}


