#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
     void set_array(int *arr,int n)
{
     long int i;
     srand(time(NULL));
       for(i=0;i<n;i++)
    {
         *(arr+i)= rand()%10000;
    }
}
int main()
{
     int n=100000,a[1000000],c[1000000],i,max,j;
     set_array(a,n);
     c[0]=1;
     for(i=1;i<n;i++)
     {    if(i%10000==0){cout<<"hi";}
          max=0;
          for(j=0;j<i;j++)
          {
           if(a[j]>max&&a[j]<a[i])
           {
               max=c[j];

           }
     c[i]=max+1;
          }
     }
     max=c[0];
     for(i=0;i<n;i++)
     {
          //cout<<endl<<c[i];
          if(c[i]>max){max=c[i];}
     }
     cout<<max;
     return 0;
}
     
