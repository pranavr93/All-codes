/* Author : Pranav
BITS PILANI Hyderabad Campus */
// Cool Guys
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
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
ll gcd(ll a,ll b){

    if(a%b==0){return b;}
    else
    {
    return gcd(b,a%b);
    }
}
int main(){
   ll t,i,sum,n,gc;
  // cout<<gcd(9,1)<<endl;
   cin>>t;
   while(t--){
     sum=0;
     cin>>n;
     for(i=1;i<=sqrt(n);i++)
     {
          sum+=  i *( n/i-n/(i+1) );
     }
   //  cout<<sum+(n+1)/2;

   for(i=1;i<n/i;i++)
   {
     sum+=n/i;
   }
   gc=gcd(sum,n*n);
   cout<<sum/gc<<"/"<<n*n/gc<<endl;
   }




 return 0;

}
