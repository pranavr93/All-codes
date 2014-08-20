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
#define fr(i,n) for(i=0; i<n; i++)
#define N 100005
#define mo 1000000007
#define f first
#define s second
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
vector <long long> a;
typedef long long int ll;
int main(){
    int n,t,i;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        fr(i,n)cin>>v[i];
        
        sort(all(v));
        
        vector<int> dp(n+1,0);
        for(i=v.size()-1;i>=0;i--){
            dp[i]=dp[i+1]+v[i];
        }
        long long sum=0;
        for(i=0;i<n;i++){
            sum+=(dp[i+1]-(n-i-1)*v[i]);
        }
        cout<<sum<<endl;
        
    }
    return 0;
}











