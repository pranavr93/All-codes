#include<stdio.h>
int main()
{
int n,m;
scanf("%d",&n);
scanf("%d",&m);
if(n==0)
	{printf("Impossible");return 0;}
if(m>=n)
	{
	printf("%d %d",m,(n+m-1));return 0;
	}
if(m<n)
	{
	printf("%d %d",n,(n+m-1));return 0;
	}
return 0;
}
