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
#define N 10005
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define scan(x) scanf("%lld",&x);
#define print(x) printf("%lld\n",x);
typedef long long ll;
vector<ll> v1,v2;
vector< pair<int,int> > y;
typedef pair <int, int> paint;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}
int main(){
ll act,bct,cct,dct,i,j,n,a[5]={0};
string s;
cin>>n;
cin>>s;
act=bct=cct=dct=0;
    for(i=0;i<s.size();i++){
        if(s[i]==65){act++;}
        if(s[i]==66){bct++;}
        if(s[i]==67){cct++;}
        if(s[i]==68){dct++;}
    }
    act=2*n-act;
    bct=2*n-bct;
    cct=2*n-cct;
    dct=2*n-dct;
    a[0]=act;a[1]=bct;a[2]=cct;a[3]=ddt;
    for(i=0;i<s.size();i++){
        for(j=0;j<4;j++){
            if(j+65==(int)s[i]){continue;}
            else{
                if(a[j]!=0){
                    cout<<(char)(a[j]+65);
                    a[j]--;break;
                }
            }
        }
    }
return 0;
}
