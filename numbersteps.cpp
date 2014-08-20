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
#include <string>
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
#define MAX 100100
#define mp(x,y) make_pair(x,y)
typedef pair <int, int> paint;
typedef long long ll;
vector<char> v;
int main()
{
ll n,k,t,ct=0;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x==y){
            if(x%2==0){cout<<2*x<<endl;}
            else{cout<<2*x-1<<endl;}
        }
        else if(x-y==2){
            if(x%2==0){
                cout<<x+y<<endl;
            }
            else{cout<<x+y-1<<endl;}
         }
         else{
            cout<<"No Number\n";
         }
    }
        

    }
 return 0;
}
