#include<stdio.h>
int primecheck(int i)
{
int j;
    for(j=2;j<i;j++)
        {
        if(i%j==0){return 1;}
        }
        return 0;
}

int main()
{
int i,flag=0,j,a[100],k=0,count=0,n;
for(i=2;i<500;i++)
    {
    flag=0;
    for(j=2;j<i;j++)
        {
        if(i%j==0){flag=1;}
        }
        if(flag==0){a[k++]=i;}
    }
scanf("%d",&n);
scanf("%d",&k);
if(k==0){printf("YES");return 0;}
for(i=2;i<=n;i++)
    {
    if(primecheck(i)){continue;}
    for(j=0;j<95;j++)
            {
            if((i-1)==(a[j]+a[j+1]))
                {count++;}
            }
    if(count==k){printf("YES");return 0;}
    }
    printf("NO");
return 0;
}