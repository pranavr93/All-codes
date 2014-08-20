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
#define mo 1000000007
#define f first
#define s second
#define MAX 100100
typedef pair <int, int> paint;
typedef long long ll;
vector<int> v;
int main()
{
   ll pos[MAX]={0},neg[MAX]={0},zero=0,minimum,k,n,i;
   cin>>n;
   cin>>k;
   v.pb(k);
   if(k==0){zero++;}
   else if(k<0){neg[0]=1;}
   else{pos[0]=1;}
   for(i=1;i<n;i++){
        scanf("%lld",&k);
        if(k==0){zero++;}
        else if(k<0){neg[i]=neg[i-1]+1;pos[i]=pos[i-1];}
        else{pos[i]=pos[i-1]+1;neg[i]=neg[i-1];}
        v.pb(k);
   }
   fr(i,n){cout<<neg[i]<<" ";}cout<<endl;
   fr(i,n){cout<<pos[i]<<" ";}cout<<endl;
   minimum=pos[0]+neg[n-1]-neg[0];
   for(i=1;i<n-1;i++){
        if(pos[i]+neg[n-1]-neg[i]<minimum){minimum=pos[i]+neg[n-1]-neg[i];}
   }
   cout<<minimum+zero;

 return 0;
}
