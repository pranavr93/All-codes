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
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
typedef pair <int, int> paint;
typedef long long ll;
vector<pair<ll,ll> >a;
vector<pair<ll,ll> >b;
int main()
{
    ll i,k;
    ll x[10000],y[10000];
    FILE *fp;
    fp=fopen("text1.txt","r");
    i=0;
    while(fscanf(fp,"%d",&k)!=EOF)
    {
        x[i]=k;
        fscanf(fp,"%d",&k);
        y[i]=k;
        i++;
    }
    fr(i,19)
    {
        cout<<x[i]<<" "<<y[i];
        cout<<endl;
    }
}
