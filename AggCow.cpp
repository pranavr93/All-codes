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
#define fr(i,n) for(ll i=0; i<n; i++)
#define N 10005
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;
ll cows;
ll check(ll *a,ll x,ll n){
    ll ptr=0;
    ll ct=1;
    for(ll i=1;i<n;i++){
        if(a[i]-a[ptr]>=x){
            ptr=i;
            ct++;
        }
        if(ct==cows){return 1;}
    }
    return 0;
}
ll bin_search(ll *a,ll low,ll high,ll n){
    ll mid;
    while(high-low>1){
        mid=(low+high)/2;
        if(check(a,mid,n)){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    return low;
}
ll main(){
      ll t;
      ll n;
      ll arr[100005];
      cin>>t;
      while(t--){
        cin>>n;cin>>cows;
        fr(i,n)cin>>arr[i];
        sort(arr,arr+n);
        //cout<<check(arr,3,n);
       // return 0;
        ll low=0;ll high=arr[n-1]-arr[0]+1;
        cout<<bin_search(arr,low,high,n)<<endl;

      }
return 0;
}


