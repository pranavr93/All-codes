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
#define MAX 1000005
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
vector <long long> a;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    if(!n)return 0;
    long long id=1;
    do{
            long long a,b,c,min1,min2,min3,temp1,temp2,temp3;
        cin>>min1>>min2>>min3;
        min1=MAX;min3+=min2;
        for(int i=1;i<n;i++){
            cin>>a>>b>>c;
            temp1=min(min1,min2)+a;
            temp2=min(temp1,min(min1,min(min2,min3)))+b;
            temp3=min(temp2,min(min2,min3))+c;
            min1=temp1;min2=temp2;min3=temp3;
          //  cout<<"Values "<<min1<<" "<<min2<<" "<<min3<<endl;
        }
        cout<<id<<". "<<min2<<endl;
        id++;
        cin>>n;
    }while(n!=0);
return 0;

}
