#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <ctime>

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <stack>
//#include <crtdbg.h>

using namespace std;
typedef long long ll;

#define TASKNAME "test"
#define M 1000100
#define INF 1000000000

int n,a[M],d[M];

void read(void){
    cin>>n;
    for (int i=0; i<n; ++i){
        cin>>a[i];
        a[i]-=i;
    }
}

void ini(void){
    for (int i=0; i<M; ++i)
        d[i]=INF;
    d[0]=-INF;
}

void add(int x){
    int to=upper_bound(d,d+M,x)-d;
    d[to]=x;
}

void ans(void){
    int i=0;
    while(d[i]!=INF){
        cout<<d[i]<<" ";
        i++;
    }
    for (int i=M-1; i>=0; --i)
        if (d[i]<INF){
            cout<<n-i<<"\n";
            return;
        }
}

void kill(void){
    for (int i=0; i<n; ++i)
        if (a[i]>0)
        add(a[i]);
}

int main()
{
    //freopen(TASKNAME".in", "r", stdin);
    //freopen(TASKNAME".out", "w", stdout);

    read();
    ini();
    kill();
    ans();


    return 0;
}
