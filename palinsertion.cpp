/* Author : Pranav
BITS PILANI Hyderabad Campus */
// Palindromic Insertions
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
//#include <sstream>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define pop pop_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define N 7000
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;


int main(){
    int t,i,j;
    	int dp[2][N];
    cin>>t;
    while(t--){

    	for(int k=0;k<N;k++)
            	{dp[0][k]=0;dp[1][k]=0;}
        string s;
        cin>>s;
       // string s_rev(s.rbegin(),s.rend());
       cin>>s_rev;
//cout<<s<<" "<<s_rev<<endl;
        for(i=1;i<=s.size();i++){
            for(j=1;j<=s_rev.size();j++){
                if(s[i-1]==s_rev[j-1]){
                    dp[1][j]=dp[0][j-1]+1;
                }
                else{
                    dp[1][j]=max(dp[0][j],dp[1][j-1]);
                }
            }

            for(int k=0;k<=s.size();k++)
            	dp[0][k]=dp[1][k];
        }

        //cout<<s.size()-dp[1][s.size()]<<endl;;
    }
return 0;
}


