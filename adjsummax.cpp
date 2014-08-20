#include<iostream>
using namespace std;
int main()
{
     int maximum=-5,i,n,a[1000],c[1000];
     cin>>n;
     for(i=0;i<n;i++)
     cin>>a[i];
     c[0]=a[0];c[1]=a[1];
     for(i=1;i<n;i++)
     c[i]=(c[i-2]+a[i]>c[i-2]) ? (c[i-2]+a[i]):c[i-1];
     for(i=0;i<n;i++)
     if(c[i]>maximum)maximum=c[i];
     cout<<endl<<maximum<<endl;
     return 0;
}


