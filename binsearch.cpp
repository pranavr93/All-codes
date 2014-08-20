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
#define MAX 100100
#define mp(x,y) make_pair(x,y)
typedef pair <int, int> paint;
typedef long long ll;
vector<int> v;
vector< pair<int,int> > a;
int main()
{
    cin>>n>>q;
    fr(i,n){cin>>k;v.pb(k);}
    while(q--)
    {
        cin>>val;
        low=0;high=n;
        while(found!=1){
            mid=(low+high)/2;
             if(v[mid]==val&&mid!=1&&v[mid-1]!=val){
               cout<<mid<<endl;break;
            }
            else if(v[mid]>=val){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
    }
return 0;
}
