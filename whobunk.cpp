#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
string s;

long long count=0,prod=1,a[27]={0},i,fact[21],n;
fact[0]=1;
int t;
cin>>t;
while(t--){
     cin>>s;
     for(i=0;i<26;i++){a[i]=0;}
     count=0;prod=1;
for(i=1;i<=20;i++)
{
     fact[i]=fact[i-1]*i;
}
for(i=0;i<s.size();i++)
     {
          a[(int)s[i]-'A']++;
     }
     for(i=0;i<26;i++)
     {
          if(a[i]>0){count++;}
     }
     prod=1;
    // cout<<fact[count]<<endl;
     for(i=0;i<26;i++)
     {
          if(a[i]>0)
          {
               prod*=fact[a[i]];
          }
     }

     cout<<fact[s.size()]/prod<<endl;
}
     return 0;
}
