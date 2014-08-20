/* Author : Pranav
BITS PILANI Hyderabad Campus */
// Chef and Integers
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
vector <long long> a;
int main(){
     ll sum=0,i,n,k,totalcost=0,cost=0,temp=0;
     cin>>n;
     while(n--){
          cin>>k;
          if(k<0){
               a.pb(-1*k);
               sum+=k;
          }
     }
     sum*=-1;
     sort(a.begin(),a.end());
     n=a.size();

     cin>>cost;
     if(cost>=n){cout<<sum;return 0;}
     i=0;
     temp=0;
     while(cost<=n){
          sum-=(n*(a[i]-temp));

          n--;
          totalcost+=(cost*(a[i]-temp));
          temp=a[i];
          i++;
     }
     totalcost+=sum;
     cout<<totalcost<<endl;
     return 0;
}
