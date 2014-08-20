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
#define fr(i,n) for(i=1; i<=n; i++)
#define N 100005
#define mo 1000000007
#define f first
#define s second
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
int main()
{
     vector <pair<int,int> > v(3);

     int t,i,a,b;
     double midx,midy,mid1x,mid1y,dist1,dist2;
cin>>t;
     while(t--)
     {
          v.clear();

     // Input
    cin>>a>>b;
    v.pb(pair<int,int>(a,b));
    cin>>a>>b;
    v.pb(pair<int,int>(a,b));
    cin>>a>>b;
    v.pb(pair<int,int>(a,b));
    cin>>a>>b;
    v.pb(pair<int,int>(a,b));
    //---------
    sort(v.begin(), v.end());

    midx= (v[0].f + v[3].f )/2.0;
    midy= (v[0].s + v[3].s )/2.0;

    mid1x=    (v[1].f + v[2].f )/2.0;
    mid1y=   (v[1].s + v[2].s )/2.0;

    if(!(midx==mid1x && midy==mid1y))    // quad
    {
     cout<<"QUADRILATERAL"<<endl;continue;
    }
    else
    {
    dist1=(v[0].f - midx) * (v[0].f - midx) +  (v[0].s - midy) * (v[0].s - midy);
    dist2= (v[1].f - midx) * (v[1].f - midx) +  (v[1].s - midy) * (v[1].s - midy);

          if(dist1==dist2)     // Square or rectangle
          {
          dist1=(v[0].f - v[1].f) * (v[0].f - v[1].f) +  (v[0].s - v[1].s) * (v[0].s - v[1].s);
          dist2=(v[1].f - v[2].f) * (v[1].f - v[2].f) +  (v[1].s - v[2].s) * (v[1].s - v[2].s);
               if(dist1==dist2)
               {
                    cout<<"SQUARE"<<endl;continue;
               }
               else
               {
                    cout<<"RECTANGLE"<<endl;continue;
               }


          }
          else
          {
               dist1=(v[0].f - v[1].f) * (v[0].f - v[1].f) +  (v[0].s - v[1].s) * (v[0].s - v[1].s);
               dist2=(v[1].f - v[2].f) * (v[1].f - v[2].f) +  (v[1].s - v[2].s) * (v[1].s - v[2].s);
               if(dist1==dist2)
               {
                    cout<<"RHOMBUS"<<endl;continue;
               }
               else
               {
                    cout<<"PARALLELOGRAM"<<endl;continue;
               }


          }


    }

   return 0;
}




