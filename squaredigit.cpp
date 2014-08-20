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
// Code begins here
ll check(ll n)
{

    ll digit,i;
    for(i=n;i>0;i/=10){
        digit=i%10;
        if(digit==4||digit==9||digit==0||digit==1){}
        else{return 0;}
    }
    return 1;
}
int main()
{
    N*=N;
    ll t,n,i,a,b;
  cin>>t;
  v.clear();
  v.pb(0);
  for(i=1;i<=sqrt(N);i++){
    if(check(i*i)==1){
        v.pb(v[i-1]+1);
    }
    else{v.pb(v[i-1]);
    }
  }
  while(t--){
  cin>>a>>b;
  cout<<v[sqrt(b)]-v[sqrt(a)-1]<<endl;
}

 return 0;
}

