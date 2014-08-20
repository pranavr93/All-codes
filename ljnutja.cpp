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
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define scan(x) scanf("%lld",&x);
#define print(x) printf("%lld\n",x);
typedef long long ll;
vector<ll> v;
vector< pair<int,int> > y;
typedef pair <int, int> paint;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}

ll sq_sum[N],cu_sum[N],dp[N],M[N];
int main(){
ll n,m,k,i,give_each,left_over,result,sum=0,m_left;

    scan(m);
    scan(n);
    sum=0;
    fr(i,n){
        scan(k);
        v.pb(k);
        sum+=k;
    }
    sort(v.begin(),v.end());
    sq_sum[0]=v[0]*v[0];
    cu_sum[0]=v[0];
    for(i=1;i<v.size();i++){
        sq_sum[i]=sq_sum[i-1]+v[i]*v[i];
        cu_sum[i]=cu_sum[i-1]+v[i];
    }
    M[0]=sum-n*v[0];
    dp[0]=sq_sum[0]*n;
    for(i=1;i<v.size();i++){
        dp[i]=sq_sum[i-1]+(n-i)*v[i]*v[i];
        M[i]=cu_sum[i-1]+(n-i)*v[i];
        M[i]=sum-M[i];
    }
    i=0;
    while(m<M[i])i++
    m_left=m-M[i];
    give_each=m_left/(n-i);
    left_over=m_left%(n-i);
    result=sq_sum[i-1]+(left_over)*(v[i]-give_each-1)*(v[i]-give_each-1);
    result=result+ (n-i-left_over)*(v[i]-give_each)*(v[i]-give_each);
    cout<<result<<endl;
return 0;
}
