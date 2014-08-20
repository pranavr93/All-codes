#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
     long long store[100]={0},k,a[10005],j,t,i,max,temp,tot[30]={0},maxtot=0,tot2[30]={0},maxtot2=0 , p[10005]={0},q[10005]={0},l;
     char s[10005];
     cin>>t;
l=strlen(s);
     while(t--)
     {maxtot=0;
     maxtot2=0;
     max=0;
          k=0;
         scanf("%s",s);
         for(i=0;i<26;i++){tot[i]=tot2[i]=0;}
          for(i=0;i<10005;i++)a[i]=0;
          for(i=strlen(s)-1;i>=0;i--)
          {

          max=0;
          for(i=0;i<strlen(s);i++)
          {
          if(s[l-i-1]!='#'){tot2[s[l-i-1]-'a']++;
           if(tot2[s[l-i-1]-'a']>max){max=tot2[s[l-i-1]-'a'];q[k]=max;}
           }
          }
               if(s[i]!='#')
               {
               tot[s[i]-'a']++;
               if(tot[s[i]-'a']>max){max=tot[s[i]-'a'];p[i]=max;}
               else{p[i]=max;}
               }

               if(s[i]=='#'||i==(strlen(s)-1) )
               {
               if(i==strlen(s)-1&&s[i]!='#')
               {store[s[i]-'a']++;}
                    max=store[0];
                    store[0]=0;
                    for(j=1;j<26;j++)
                    {
                         if(store[j]>max){max=store[j];}
                         store[j]=0;
                    }
                    if(max!=0){a[k++]=max;}
                    if(max==0&&s[i-1]=='#'){a[k++]=-1000000;}
               }
              else
               {
                  store[s[i]-'a']++;
               }
          }
          if(k<=3){cout<<"0"<<endl;continue;}
               max=p[0]+a[1]+a[2]+a[3];
               //for(i=0;i<k;i++)cout<<a[i]<<" ";cout<<endl;
               for(i=1;i<(k-3);i++)
               {
                    temp=p[i]+a[i+1]+a[i+2]+a[i+3];

               if(temp>max){max=temp;}
               }
               if(max>0){cout<<max+3<<endl;}
               else{cout<<"0"<<endl;}

     }
     for(i=0;i<k;i++)
     cout<<a[i]<<" ";
     return 0;
}
