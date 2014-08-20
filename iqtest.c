#include<stdio.h>
int main()
{
int n,a[110],k,sum=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d",&k);
	sum+=k;
	if(sum%2!=0)
		{
		printf("%d",i+1);return 0;
		}
	}
return 0;
}