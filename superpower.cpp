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
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)

vector<int> v;
vector< pair<int,int> > a;
typedef pair <int, int> paint;
typedef long long ll;

ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}
long long N=100000;

int main()
{
    ll t,n,temp,k,i;
  cin>>t;
  while(t--){
    cin>>n;
    k=n;
    temp=1;
    while(k){
        if(k%2==0){v.pb(0);}
        else{v.pb(1);}
        k/=2;
    }
   // temp=v[v.size()-1];
   temp=0;
    for(i=v.size()-1;i>=0;i--)
    {
       temp=temp*10+v[i];
    }
    k=fastpow(2,temp,1);
    k=k%mod;
    k=(k*k)%mod;
    cout<<k<<endl;
  }
 return 0;
}

