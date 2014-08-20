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
#define N 1000010
#define mo 1000000007
#define f first
#define s second
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;

typedef long long int ll;

long long dp[N];
long long a[N];
int main(){
    long long n;

    for(int i=1;i<=N/2;i++){
        for(int j=2*i;j<N;j+=i){
            a[j]+=i;
        }
    }


    dp[0]=0;dp[1]=0;dp[2]=1;
    for(int i=3;i<N;i++){
        dp[i]=dp[i-1]+a[i];

    }


    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<dp[n]<<endl;
    }
return 0;

}











