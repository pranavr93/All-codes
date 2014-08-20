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
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
bool funny_comp(const string &lhs, const string &rhs)
{
   return (lhs.size() == rhs.size()) ? lhs < rhs
                                      : lhs.size() < rhs.size();
}
int main()
{
     //char s1[1005][20],s2[1005][20],s3[1005][20];
     char s[30];
     int i,t,a,b,c,score1,score2,score3,j;
      vector<string> s1;
  vector<string> s2;
  vector<string> s3;
  cin>>t;
  while(t--)
  {
         s1.clear();
         s2.clear();
         s3.clear();

       cin>>a>>b>>c;
     for(i=0;i<a;i++)
     {
           scanf("%s",s);
          s1.pb(s);
     }
      for(i=0;i<b;i++)
     {
          scanf("%s",s);
          s2.pb(s);
     }
     for(i=0;i<c;i++)
     {
          scanf("%s",s);
          s3.pb(s);
     }
    score1=a*3;
    score2=b*3;
    score3=c*3;

     sort(s1.begin(),s1.end(),funny_comp);
     sort(s2.begin(),s2.end(),funny_comp);
     sort(s3.begin(),s3.end(),funny_comp);
     list<string> intersection;
     set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),back_inserter(intersection),funny_comp);
     score1=score1-intersection.size();
     score2=score2-intersection.size();

     list<string> inter;
     set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(),back_inserter(inter),funny_comp);
     score1=score1-inter.size();
     score3=score3-inter.size();

     list<string> inters;
     set_intersection(s2.begin(), s2.end(), s3.begin(), s3.end(),back_inserter(inters),funny_comp);
     score2=score2-inters.size();
     score3=score3-inters.size();

     //cout<<score1<<" "<<score2<<" "<<score3;
     if(score1==score2&&score2==score3){cout<<"Tie\n";}
    else if(score1>score2&&score1>score3){cout<<"Raju\n";}
    else if(score2>score1&&score2>score3){cout<<"Ramu\n";}
    else if(score3>score2&&score3>score1){cout<<"Rakesh\n";}
    else{cout<<"Tie\n";}
  }


  return 0;
}
