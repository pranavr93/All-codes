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
#define m 1000000007
#define f first
#define s second
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
long long temp,cur;

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
long long nfact(long long n){
     long long val=1,i;
     for(i=1;i<=n;i++){
          val=mod(val*i);
     }
    return val;
    }
int main()
{
long long t,b,c,lcm,k,a[10]={0},i,prod;
     cin>>t;
     string s;
     while(t--){
          s.clear();
          cin>>s;
          for(i=0;i<10;i++){a[i]=0;}
          for(i=0;i<s.size();i++){
               a[(int)s[i]-'0']++;
          }

         b= nfact(s.size() );
         prod=1;
         for(i=0;i<10;i++)
         {
          prod=mod (prod* (nfact(a[i])) );
         }
         cout<< mod(b*degree(prod,m-2))<<endl;
     }
  return 0;
}
