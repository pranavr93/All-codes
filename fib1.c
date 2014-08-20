#include<stdio.h>
long long fib(long long n)
{
if(n==1||n==2)
	{return 1;}
	else {return fib(n-1)+fib(n);}
}
int main()
{
long long n;
scanf("%I64d",&n);
while(1)
	{
	if(n==fib(i))
		{
		printf("%I64d ",fib(i-1));
		printf("%I64d ",fib(i-3));
		printf("%I64d ",fib(i-4));
		return 0;
		}
	}
return 0;
}