#include<stdio.h>
int main()
{
long long n,i=1,sum=3;
scanf("%ld",&n);
if(n==1){printf("0");return 0;}
while(1)
    {
    sum=sum*3-3;i++;
    if(i==n){printf("%ld",sum%1000000007);return 0;}
    sum=sum*3+3;i++;
    if(i==n){printf("%ld",sum%1000000007);return 0;}
    }
return 0;
}


#include<iostream>
#include<vector>
#define mod 1000000007
using namespace std;
int n;
int main()
{
    cin>>n;
    long long tmp=0;
    long long cnt=3;
    for(int i=0;i<n-1;i++){
        tmp=(cnt-tmp+mod)%mod;
        cnt=cnt*3%mod;
    }
    cout<<tmp<<endl;

}