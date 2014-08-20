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
#define N 5000
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;

 long long degree(long long a, long long k) {        //returns a^k mod p in O(logk)
   ll temp = 1;
   ll cur = a;
  while (k) {
    if (k%2) {
      temp = (temp*cur)%mod;

    }
    k /= 2;
    cur = (cur*cur)%mod;

  }
  return temp;
}

ll compute(ll s,ll x){
    if(s<0){return 0;}
    if(x<0)return 0;
    if(x==0)return 1;
     ll prod=1;

    ll fact=1;
      for(ll i=1;i<=x;i++){
        prod=(prod*(s+i))%mod;
        fact=(fact*i)%mod;
    }

    return(prod*degree(fact,mod-2))%mod;
   }
int main(){
    ll n,s;
    cin>>n>>s;
    ll a[100]={0};
    for(ll i=0;i<n;i++){
        cin>>a[i];
     }
         ll x=n-1;
    ll sum2=0;
    ll sum=compute(s,x);
     if(n==1){
        cout<<sum;return 0;
     }
     if(n==2){
         sum=(sum+ compute(s-a[0]-a[1]-2,n-1))%mod;
       // cout<<sum<<endl;

        
         sum2=(sum2+compute(s-a[0]-1,n-1))%mod;
         sum2=(sum2+compute(s-a[1]-1,n-1))%mod;

       //  cout<<sum2<<endl;
           cout<<(sum+mod-sum2)%mod;return 0;
     }
     if(n==3){
          sum=(sum+ compute(s-a[0]-a[1]-2,n-1))%mod;
        sum=(sum+ compute(s-a[1]-a[2]-2,n-1))%mod;
        sum=(sum+ compute(s-a[0]-a[2]-2,n-1))%mod;
       // cout<<sum<<endl;
        sum2=(sum2+ compute(s-a[0]-a[1]-a[2]-3,n-1))%mod;
         sum2=(sum2+compute(s-a[0]-1,n-1))%mod;
         sum2=(sum2+compute(s-a[1]-1,n-1))%mod;
         sum2=(sum2+compute(s-a[2]-1,n-1))%mod;
       //  cout<<sum2<<endl;
           cout<<(sum+mod-sum2)%mod;return 0;
     }

     
     
     
    // cout<<compute(3,1);return 0;

    cout<<sum<<endl;
    sum=(sum+n)%mod;
    for(ll i=0;i<n;i++){
        sum2=(sum2+compute(a[i]-2+n-1,n-1))%mod;
    }
    cout<<(sum+mod-sum2)%mod;
    

}


