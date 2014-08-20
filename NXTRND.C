#include<stdio.h>
int main()
{int n,k,a[100],i=0,count=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
    {
    if(a[i]>0)
	{count++;}
    else
	{printf("%d",count);return 0;}
    }
while(1)
    {
    if(a[k]==a[k-1])
	{count++;}
    else
	{printf("%d",count);return 0;}
    k++;
    }
return 0;
}