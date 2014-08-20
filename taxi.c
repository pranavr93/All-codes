#include<stdio.h>
int main()
{
long n,ans=0,i,k,a[5]={0,0,0,0,0};
scanf("%ld",&n);
for(i=0;i<n;i++)
    {
    scanf("%d",&k);
    a[k]++;
    }   
ans+=a[4];
if(a[3]>=a[1])
    {
    ans+=a[3];
    ans=ans+((a[2]/2)+a[2]%2);
    printf("%ld",ans);return 0;
    }
else
    {
    a[1]=a[1]-a[3];
    ans+=a[3];
    if(a[2]%2==0)
        {
        ans+=(a[2]/2);
        if(a[1]%4==0){ans+=(a[1]/4);}
        else{ans=ans+a[1]/4+1;}
        printf("%ld",ans);return 0;
        }
    else
        {
        ans=ans+(a[2]/2);
        a[1]+=2;
        if(a[1]%4==0){ans+=(a[1]/4);}
        else{ans=ans+a[1]/4+1;}
        printf("%ld",ans);return 0;
        }
    }
return 0;
}