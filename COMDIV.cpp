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
#include <sstream>
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
vector<char> v;
vector< pair<int,int> > y;
typedef pair <int, int> paint;
typedef long long ll;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}
int main(){
    ll a1,a2,k,i,dp[6000];
    string s;
    while(1){
    cin>>s;
        if(s.size()==1&&s[0]=='0'){
        break;
        }
        dp[0]=1;
        for(i=1;i<s.size();i++){
            dp[i]=dp[i-1];
            a1=(int)s[i]-'0';
            a2=(int)s[i-1]-'0';
            k=a2*10+a1;
            if(k<=26&&i!=1){dp[i]+=dp[i-2];}
        }
    cout<<dp[n-1]<<endl;
    }

}
