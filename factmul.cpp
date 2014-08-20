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
#define N 10000005
#define INF 1000000
#define MOD 109546051211LL
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;
// fact[i] contains i!%MOD
ll fact[N];

// dp[i] contains answer (1!x2!...i!)%MOD
ll dp[N];

// This template is useful for finding a*b mod c when a*b >2^64 and c is close to 2^64

long long mul_mod(long long a,long long b)
{
	long long res=0;
	while(b)
	{
		if(b&1)
		{
			res+=a;
			if(res>=MOD) res-=MOD;
		}
		a<<=1;
		if(a>=MOD) a-=MOD;
		b>>=1;
	}
	return res;
}
int main(){

    ll i,n;
    //cin>>n;
    sc(n);
    fact[0]=1;dp[0]=1;
    for(i=1;i<=n;i++){
        fact[i]=(fact[i-1]*i)%MOD;
        dp[i]=mul_mod(fact[i],dp[i-1]);
    }
    pr(dp[n]);//cout<<dp[n]<<endl;
return 0;
}


