/* Author : Pranav
BITS PILANI Hyderabad Campus */
// x1^d +x2^d+x3^d mod n =m ; number of solutions  1=<x1,x2,x3<=up
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
long long a[100005],prod[12000],m;
long long mod(long long k){
    return k%m;
    }
int main(){
     long long n,t,i,res=1,li,ri,j;
     cin>>n;
     j=0;
     memset(prod,1,12000);
     
     fr(i,n){
           if(i%9==1){j++;}
     scanf("%I64d",&a[i]);
     prod[j]*=a[i];

     }
     scanf("%I64d",&t);
     
     while(t--){
          res=1;
          cin>>li>>ri>>m;
          for(i=li;i%9!=1;i++){
               if(li%9==1){break;}
               res=mod(res*a[i]);
          }
          for(i=i/9+1;i<=ri/9;i++){
               res=mod(res*prod[i]);
          }
          for(i;i<=ri;i++){
               res=mod(res*a[i]);
          }
          cout<<res<<endl;
     }
     
  return 0;
}
