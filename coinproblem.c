//2,3,5,7,12 coin problem
#include<iostream>
using namespace std;
int min(int a ,int b1,int c,int d,int e)
{
     int i,b[5],mini;
     mini=a;
     b[0]=a;b[1]=b1;b[2]=c;b[3]=d;b[4]=e;
     for(i=1;i<5;i++)
     {
          if(b[i]<mini)
          mini=b[i];
     }
     return mini;
}
int main()
{
     int i,n,a[10000];
     cout<<"Enter the value ";
     cin>>n;
     a[0]=10000;a[1]=10000;a[2]=1;a[3]=1;a[5]=1;a[4]=2;a[6]=2;a[7]=1;a[8]=2;a[9]=2;a[10]=2;a[11]=3;a[12]=1;
     if(n<=12){cout<<a[n];return 0;}
     for(i=13;i<=n;i++)
     {
          a[i]=min(a[i-2]+1,a[i-3]+1,a[i-5]+1,a[i-7]+1,a[i-12]+1);
     }
     cout<<a[n]<<endl;

     return 0;
}
