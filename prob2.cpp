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
int main()
{
	int t,n,i,j,x,y;
	ll s=0;j=-1;
    cin>>n;
	map<int,int> M;
	for(i=0;i<n;i++){
		cin>>x;
		M[x]++;
		while(M[x]==2){
			M[x]=0;
			x++;
			M[x]++;
		}
	}
    tr(M,it){
		x=(*it).f;
        y=(*it).s;
		if(y==1)
			{s+=x-j-1;j=x;}
	}
    cout<<s<<endl;
}
