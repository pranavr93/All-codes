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
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
vector<int> a;
int main()
{
    int n,m,c,start=0,sum,tot,t,mini=10000000,i,k,dp[1000000]={0},j,p;
   cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>p;a.pb(p);
    }
    n=a.size();
    sort(a.rbegin(),a.rend());
//for(i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
sum=0;
    for(i=0;i<k-1;i++){
        sum+=a[i];
    }
    dp[0]=sum;

    for(i=1;i<n-k+2;i++){
        dp[i]=dp[i-1]+a[i+k-2]-a[i-1];
    }
//for(i=0;i<n;i++){cout<<dp[i]<<" ";}cout<<endl;
        j=k-1;
sum=0;
    for(i=0;i<k;i++){
        sum+=j*a[i];
        j-=2;
    }
    for(i=1;i<n-k+1;i++){
        sum=(sum-(k-1)*a[i-1])+(dp[i]*2)-a[i+k-1]*(k-1);
        if(sum<mini){mini=sum;}
    }
    cout<<mini<<endl;
   return 0;
}




