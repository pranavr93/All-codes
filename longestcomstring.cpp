#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
     int c[1000][1000],i,j,max;
     char a[100],b[100];
     for(i=0;i<1000;i++)
     for(j=0;j<1000;j++)c[i][j]=0;
     gets(a);gets(b);
     for(i=1;i<=strlen(b);i++)
     {
          if(a[0]==b[i-1])
          {
               c[1][i]=1;
          }
     }
     for(i=1;i<=strlen(a);i++)
     {
          if(b[0]==a[i-1])
          {
               c[i][1]=1;
          }
     }
     max=0;
     for(i=1;i<=strlen(a);i++)
     {
          for(j=1;j<=strlen(b);j++)
          {
               if(a[i-1]==b[j-1])
               {
                    c[i][j]=c[i-1][j-1]+1;
               }
               else
               {
                    c[i][j]=0;
               }
               if(c[i][j]>max){max=c[i][j];}
          }
     }
    cout<<max<<endl;
    return 0;
}
