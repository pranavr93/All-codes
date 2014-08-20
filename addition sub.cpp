#include<iostream>
#include<stdio.h>
#include<string.h>
char s1[1000],s2[1000],i;
int a[1000]={0},b[1000]={0},n1,n2,c[1000];
using namespace std;
//-----------------Addition----------------------
void add()
{
    int carry=0,k,m ;
 k=n1;
 m=n2-1;
 while(k--)
 {
     if(m>=0){
     c[k+1]=a[k]+b[m]+carry;m--;
     if(c[k+1]>9){carry=c[k+1]/10;c[k+1]=c[k+1]%10;}
     }
     else{c[k+1]=a[k];}
 }
 c[0]=carry;
}
//----------------Subtraction -------------------------
void subtract()
{
       int borrow=0,k,m ;
 k=n1;
 m=n2-1;

 while(k--)
 {
     if(m>=0){
          if(a[k]>=b[m])
          {
               c[k]=a[k]-b[m];
              // cout<<c[k]<<" " <<a[k]<<" " <<b[m]<<endl;
               m--;
          }
          else
          {
               c[k]=a[k]+10-b[m];
               //cout<<c[k]<<" " <<a[k]<<" " <<b[m]<<endl;
               a[k-1]--;
               m--;
          }
     }
     else{c[k]=a[k];}
 }
}

void multiply()
{


}
//----------------Main Function ----------------------
int main()
{
     int temp;
     gets(s1);
     gets(s2);
     n1=strlen(s1);
     n2=strlen(s2);
     for(i=0;i<strlen(s1);i++)
     s1[i]=s1[i]-'0';
     for(i=0;i<strlen(s2);i++)
     s2[i]=s2[i]-'0';

     if(n1>n2){
     for(i=0;i<strlen(s1);i++)
     a[i]=(int)s1[i];
     for(i=0;i<strlen(s2);i++)
     b[i]=(int)s2[i];    }
     else
     {for(i=0;i<strlen(s1);i++)
     b[i]=(int)s1[i];
     for(i=0;i<strlen(s2);i++)
     a[i]=(int)s2[i];
     temp=n1;
     n1=n2;
     n2=temp;
     }
     

     add();
     for(i=0;i<n1+1;i++)
     cout<<c[i];
     cout<<endl;

     subtract();
     i=0;
     if(c[0]==0){i=1;}
     for(i;i<n1;i++)
     cout<<c[i];
     cout<<endl;
    // multiply();
return 0;
}
