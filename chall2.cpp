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
typedef pair <int, int> paint;
typedef long long ll;

ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll fastpow(ll a,ll n,ll temp){if(n==0) return(1);if(n==1)return((a*temp)%mod); if(n&1)temp=(temp*a)%mod;return(fastpow((a*a)%mod,n/2,temp));}
long long N=100000;
vector<long long> v[100000];
vector<long long> a;
int main()
{
    ll t,val,i,n,k,j,ct=0;
    cin>>t;
    while(t--){

        scanf("%lld",&n);
        scanf("%lld",&k);
        for(i=0;i<n;i++){v[i].clear();}
          a.clear();
        for(i=0;i<n;i++)
        {

            for(j=0;j<k;j++)
            {
                scanf("%lld",&val);
                v[i].pb(val);
            }
        }
       for(i=0;i<k;i++){
        scanf("%lld",&val);
        a.pb(val);
       }
       ct=0;
       for(i=0;i<n;i++)
       {
       val=ct;
            for(j=0;j<k;j++){
                if(v[i][j]<=a[j]){ct++;}
                else{break;}
            }
            if(ct%k==0&&ct!=val){
               for(j=0;j<k;j++){
                    a[j]-=v[i][j];
               }
            }
            else{
                cout<<ct/k<<endl;
                for(j=1;j<=ct/k;j++){
                    cout<<j<<" ";
                }
                cout<<endl;
                goto lab;
            }
       }
      if(ct<k){
       cout<<0<<endl; }
       else{
         cout<<ct/k<<endl;
                for(j=1;j<=ct/k;j++){
                    cout<<j<<" ";
                }
                cout<<endl;
       }
        lab:
        cout<<endl;
    }
    return 0;
}
