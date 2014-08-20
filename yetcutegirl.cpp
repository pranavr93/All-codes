#/* Author : Pranav
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

vector<int> v;
vector< pair<int,int> > a;
typedef pair <int, int> paint;
typedef long long ll;
const int yoyo[]={2,3,7,11,61,24251};
long long mul_mod(long long a,long long b,long long MOD)
{
    long long res=0;
    while(b)
    {
        if(b&1)
        {
            res+=a;
            if(res>=MOD) res-=MOD;
        }
        a<<=1;
        if(a>=MOD) a-=MOD;
        b>>=1;
    }
    return res;
}
long long pow_mod(long long a,long long n,long long MOD)
{
    long long ans=1;
    while(n)
    {
        if(n&1) ans = mul_mod(ans,a,MOD);
        a=mul_mod(a,a,MOD);
        n>>=1;
    }
    return ans;
}
bool isPrime(long long n)
{
    for(int i=0;i<6&&yoyo[i]<n;i++)
    {
        int r=0;
        long long s=n-1;
        while(!(s&1)){s>>=1; r++;}
        long long x=pow_mod(yoyo[i],s,n);
        if(x==1) continue;
        int j;
        for(j=0;j<r;j++,x=mul_mod(x,x,n))
        {
            if(x==n-1) break;
        }
        if(j==r) return false;
    }
    return true;
}
long long primect(long long a)
{
    long long index[100],t,n,out=1,r,i,j,k,l,root,count[100],prime[100],m;
    n=1;
        l=0;
        r=0;
        out=1;
        for(j=0;j<100;j++)
        {
            count[j]=0;
            prime[j]=0;
            index[j]=-1;
        }
        for(j=0;j<n;j++)
        {
            root=sqrt(a);
            for(k=2;k<=(root+1);k++)
            {
                if(a%k==0)
                {
                    for(m=0;m<r;m++)
                    {
                        if(prime[m]==k)
                        {
                            l=index[m];
                            break;
                        }
                    }
                    if(m==r)
                    {
                        prime[r]=k;
                        index[r]=r;l=r;
                        r++;
                    }
                    while(a%k==0)
                    {
                        count[l]=count[l]+1;
                        a=a/k;
                    }
                }
            }
            if(a>1)
            {
                for(m=0;m<r;m++)
                {
                    if(prime[m]==a)
                    {
                        l=index[m];
                        //printf("%d\n",l);

                        break;
                    }
                }
                if(m==r)
                {
                    prime[r]=a;
                    index[r]=r;l=r;
                    r++;
                }

                count[l]++;
            }
        }

        for(j=0;j<r;j++)
        {

        //printf("%d\n",prime[j]);
            count[j]=count[j]+1;
            out=out*count[j];
        }
       return out;

}

int main(){
    ll a,b,t,m,n,less,i,p,j,ct;
    cin>>t;
    while(t--){
        cin>>n>>m;
       int primes[1000005]={0};
        for(i=0;i<m-n+1;i++){
                primes[i]=0;
        }
        for(p=2;p*p<=m;p++)
        {
            less=n/p;
            less*=p;
            for(j=less;j<=m;j+=p){
                    if(j!=p&&j>=n){
                        primes[j-n]=1;
                    }
            }
        }//cout<<m-n+1;
        ct=0;
        for(i=0;i<m-n+1;i++)
        {
            if(primes[i]==0&&n+i!=1)
            {
                ct++;
            }
        }
    for(i=ceil(sqrt(n));i<=sqrt(m);i++)
    {
        if(isPrime(primect(i*i))){ct++;}
    }
    cout<<ct<<endl;
    }
    return 0;
 }
