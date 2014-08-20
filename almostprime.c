#include<stdio.h>
int main()
{
    int n,flag=0,i,j,a[239],k=0,total=0;
    scanf("%d",&n);
    for(i=2;i<=1500;i++)
        {flag=0;
        for(j=2;j<i;j++)
            {
            if(i%j==0)
                {flag=1;break;}
            }
            if(flag==0)
            {a[k++]=i;}
        }
for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
            {if(a[i]*a[j]<=n)
                {printf("%d %d\n",a[i],a[j]);total++;}
            }
    }
    
printf("%d",total);return 0;
}