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
#define N 100005
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
vector<long long> v;
vector< pair<int,int> > a;
typedef pair <int, int> paint;
typedef long long ll;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}

// Code begins here
int main()
{
    ll t,n,k,i;
    cin>>t;
    while(t--){
    v.clear();
        cin>>n;
        fr(i,n){
        cin>>k;v.pb(k);
        }
        cin>>k;
        k=v[k-1];
        sort(v.begin(),v.end());
        fr(i,n){
            if(v[i]==k){cout<<i+1<<endl;break;}
        }
    }
 return 0;
}

