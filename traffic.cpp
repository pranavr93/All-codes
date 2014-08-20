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
#define N 100005
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define scan(x) scanf("%lld",&x);
#define print(x) printf("%lld",x);
typedef long long ll;
vector<ll> stacks;
vector< pair<int,int> > y;
typedef pair <int, int> paint;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}
int main(){
ll t,ct,k,i,order,n,a[100000];
cin>>n;
    while(n!=0){
        order=0;
        if(n==0){break;}
        for(i=0;i<n;i++){
            scan(a[i]);
        }
        for(i=0;i<n;i++){
            //cin>>k;
            k=a[i];
            if(k==order+1){
                order++;
            }
            else{
                while(!stacks.empty()&&stacks[stacks.size()-1]==order){
                    stacks.pop();
                    order++;
                }
                if(k==order+1){order++;}
                else if(stacks.empty()||k<stacks[stacks.size()-1]){
                    stacks.pb(k);
                }
                else{
                    cout<<"no\n";

                    goto lab;
                }
            }
        }

        cout<<"yes\n";
        lab:
        scan(n);
        //cout<<"!!!"<<n<<"!!!"<<endl;
        stacks.clear();
    }

  return 0;
}
