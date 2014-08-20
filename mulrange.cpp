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
#define fr(i,n) for(i=1; i<=n; i++)
#define N 100005
#define mo 1000000007
#define f first
#define s second
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
long long m,temp,cur;
int dp[100001][101];
long long mod(long long k){
    return k%m;
    }
long long degree(long long a, long long k) {        //returns a^k mod p
   temp = 1;
   cur = a;
//cout<<a<<" "<<k<<" "<<m<<endl;
  while (k) {
    if (k%2) {
      temp = mod(temp * cur);

    }
    k /= 2;
    cur = mod(cur * cur) ;

  }
  return temp;
}
void scanint(int *z)
{
    int t, neg = 0;
    register int c = getchar_unlocked();
    t=*z;
    t = 0;
    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());
    if(c=='-')
    {
        neg=1;
        c=getchar_unlocked();
    }
    for(;c>47 && c<58;c = getchar_unlocked())
        t = (t<<1) + (t<<3) + c - 48;
    if(neg)
        t=-t;
    *z=t;
}
int main(){
     long long prod=1;
     int li,ri,i,n,t,j,val;
     scanint(&n);
     fr(i,n){
     scanint(&val);
     if(val%2==0){val/=2;dp[i][2]=dp[i-1][2]+1;}
     if(val%3==0){val/=3;dp[i][3]=dp[i-1][3]+1;}
     dp[i][val]=dp[i-1][val]+1;;
          fr(j,100){
               if(j==val){continue;}
               dp[i][j]=dp[i-1][j];
          }
     }
    scanint(&t);
     while(t--){
         prod=1;
          scanint(&li);scanint(&ri);
         scanf("%lld",&m);
          fr(j,100){
               if( dp[ri][j]-dp[li-1][j]==0){continue;}
               prod=mod(prod*degree(j,dp[ri][j]-dp[li-1][j]) );
          }
          printf("%lld\n",prod);
     }


  return 0;
}
