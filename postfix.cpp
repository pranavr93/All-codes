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
void scan(long long *z)
{
    long long t, neg = 0;
    register long long c = getchar_unlocked();
    t=*z;
    t = 0;
    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());
    if(c=='-')
    {
        neg=1;
        c=getchar_unlocked();
    }
    for(;c>47 && c<58;c =getchar_unlocked())
        t = (t<<1) + (t<<3) + c - 48;
    if(neg)
        t=-t;
    *z=t;
}
int main()
{
ll n,k,t,ct=0;
    scan(&n);
    scan(&k);
    while(n--){
      scan(&t);
       if(t%k==0){ct++;}
    }
    printf("%lld",ct);
 return 0;
}
