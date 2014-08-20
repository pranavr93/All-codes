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
float area(ll x1, ll y1, ll x2, ll y2,ll x3, ll y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
bool isInside(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x, ll y)
{
   float A = area (x1, y1, x2, y2, x3, y3);

   float A1 = area (x, y, x2, y2, x3, y3);

   float A2 = area (x1, y1, x, y, x3, y3);

   float A3 = area (x1, y1, x2, y2, x, y);

    return (A == A1 + A2 + A3);
}
int main()
{
     vector <pair<ll,ll> > v(3);

     long long t,i,a,b;
     double midx,midy,mid1x,mid1y,dist1,dist2;
     long long a1,a2,a3,b1,b2,b3,c1,c2,c3,flag=0,j,k,g3;
cin>>t;
     while(t--)
     {
          v.clear();

     // Input
    cin>>a>>b;
    v.pb(pair<ll,ll>(a,b));
    cin>>a>>b;
    v.pb(pair<ll,ll>(a,b));
    cin>>a>>b;
    v.pb(pair<ll,ll>(a,b));
    cin>>a>>b;
    v.pb(pair<ll,ll>(a,b));
    //---------
    sort(v.begin(), v.end());
    flag=0;
    for(i=0;i<4;i++)
    {
     for(j=i+1;j<4;j++)
     {
          for(k=j+1;k<4;k++)
          {

    a1=v[i].f;a2=v[i].s;a3=1;
    b1=v[j].f;b2=v[j].s;b3=1;
    c1=v[k].f;c2=v[k].s;c3=1;
    g3=a1*(b2*c3-b3*c2)-a2*(b1*c3 -b3*c1)+a3*(b1*c2-b2*c1);
    if(g3==0){cout<<"NONE"<<endl;flag=1;goto lab;}


          }
     }
    }
     if(flag==1){
     lab:
     continue;}

 /*   if(isInside(v[0].f,v[0].s,v[1].f,v[1].s,v[2].f,v[2].s, v[3].f,v[3].s)){cout<<"NONE"<<endl;continue;}
     if(isInside(v[0].f,v[0].s,v[2].f,v[2].s,v[3].f,v[3].s, v[1].f,v[1].s)){cout<<"NONE"<<endl;continue;}
     if(isInside(v[0].f,v[0].s,v[1].f,v[1].s,v[3].f,v[3].s, v[2].f,v[2].s)){cout<<"NONE"<<endl;continue;}
     if(isInside(v[3].f,v[3].s,v[1].f,v[1].s,v[2].f,v[2].s, v[0].f,v[0].s)){cout<<"NONE"<<endl;continue;}
     */

/*for(i=0;i<4;i++)
{
cout<<v[i].f<<" "<<v[i].s<<endl;
}
*/
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
          dist2=(v[1].f - v[3].f) * (v[1].f - v[3].f) +  (v[1].s - v[3].s) * (v[1].s - v[3].s);
        // cout<<dist1<<endl<<dist2<<endl;
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
               dist2=(v[1].f - v[3].f) * (v[1].f - v[3].f) +  (v[1].s - v[3].s) * (v[1].s - v[3].s);
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
     }

   return 0;
}

