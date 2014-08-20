/* Author : Pranav
BITS PILANI Hyderabad Campus */
// Cool Guys
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
#include <iomanip>
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

vector<int> v;

int main(){
      int dir,n,count=0,m,x,y,yprev,a,b,xprev;
      cin>>n>>m;
      cin>>a>>b;
if(n%2==0)
{
//cout<<a<<b;
     dir=1;
     x=1;y=1;
     while(1)
     {
          // cout<<x<<" "<<y<<endl;
           if(x==a&&y==b)
           {
               count++;
               cin>>a>>b;
               if(count==2){return 0;}
           }
          if(y==1&&yprev!=y&&x!=1)
          {
               dir*=-1;
               x++;
               v.pb(1);//cout<<1<<" ";
               yprev=y;
          }
          else if(y==m&&yprev!=y)
          {
               dir*=-1;
               x++;
               v.pb(1);//cout<<1<<" ";
               yprev=y;
          }
          else
          {
               y+=dir;
               if(dir==1){v.pb(3);}//cout<<3<<" ";}
               else if(dir==-1){v.pb(2);}//cout<<2<<" ";}
          }

          if(x==n+1)
          {
               x=1;y=1;//cout<<0<<" ";
          }


     }


}
else
{
       dir=1;
     x=1;y=1;
     while(1)
     {
           if(x==a&&y==b)
           {
               count++;
               cin>>a>>b;
               if(count==2){return 0;}
           }
          if(x==1&&xprev!=x&&y!=1)
          {
               dir*=-1;
               y++;
               v.pb(3);//cout<<3<<" ";
               xprev=x;
          }
          else if(x==n&&xprev!=x)
          {
               dir*=-1;
               y++;
               v.pb(3);//cout<<3<<" ";
               xprev=x;
          }
          else
          {
               x+=dir;
               if(dir==1){v.pb(1);}//cout<<1<<" ";}
               else if(dir==-1){v.pb(0);}//cout<<0<<" ";}
          }

          if(y==m+1)
          {
               x=1;y=1;//cout<<0<<" ";
          }


     }
}
cout<<v.size()<<endl;
fr(i,v.size){
     cout<<v[i]<<" ";
}


return 0;
}
