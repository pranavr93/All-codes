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
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;

int main()
{
   long long t,n,m,k,i,j,val,sum=0;
   cin>>t;
   vector<long long> v[101];
   vector<long long> path;
   while(t--){
     sum=0;
     fr(i,100)v[i].clear();
     path.clear();
     cin>>n>>m;
     fr(i,m){
          cin>>k;
          path.pb(k);
     }
     fr(i,n){
          cin>>k;
          fr(j,k){
               cin>>val;
               v[i].pb(val);
          }
     sort(v[i].begin(),v[i].end());
     }
     fr(i,m){
     if(v[path[i]].empty())continue;
          sum+=v[path[i]][v[path[i]].size()-1];
          v[path[i]].erase(v[path[i]].end()-1);
     }
     cout<<sum<<endl;
   }
  return 0;
}