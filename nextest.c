#include<stdio.h>
int main()
{
int n,a[3001],k,i;
scanf("%d",&n);
for(i=1;i<n+1;i++)
	{
	a[i]=0;
	}
for(i=1;i<n+1;i++)
	{
	scanf("%d",&k);
	a[k]=1;
	}
for(i=1;i<n+1;i++)
	{
	if(a[i]==0)
		{
		printf("%d",i);return 0;
		}
	}
return 0;
}