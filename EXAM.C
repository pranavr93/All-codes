#include<stdio.h>
int main()
{
int n,k,j;
scanf("%d",&n);
scanf("%d",&k);
if((n*3)<=k)
	{
	printf("0");
	}
else if(n*2==k)
	{
	printf("%d",n);}
else
	{
	j=n-k+(n*2);
	printf("%d",j);
	}
return 0;
}