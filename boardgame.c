#include<stdio.h>
int main()
{
int n,k,b[30]={0},c[30]={0},i,j,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
		scanf("%d",&k);
		b[i]+=k;
		c[j]+=k;
		}
	}
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
		if(c[i]>b[j])
		{count++;}
		}
	}
printf("%d",count);
return 0;
}