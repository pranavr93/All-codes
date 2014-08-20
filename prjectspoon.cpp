/* Author : Pranav
BITS PILANI Hyderabad Campus */
// Project spoon
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

int main(){
   ll t,i,sum,n,k,val,flag=0,j,a[70]={0};
   cin>>t;
   ll nck[100][100];
   n=65;k=65;
   nck[1][1]=1;
   for(i=2;i<=k;i++){nck[1][k]=0;}
   for(i=2;i<=n;i++){nck[i][1]=i;}
   for(i=2;i<=n;i++){
     for(j=2;j<=k;j++){
          nck[i][j]=nck[i-1][j]+nck[i-1][j-1];
     }
     }
   for(i=2;i<=65;i++){
     a[i]=nck[i][i/2];
   }

   while(t--){
     cin>>n;
     for(i=2;i<=65;i++){
          if(a[i]>=n){cout<<i<<endl;break;}
     }

   }


 return 0;

}
