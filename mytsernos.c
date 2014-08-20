#include<stdio.h>
int rev(long long n)
	{
	int i;
	long long digit,sum=0;
	for(i=b;i>0;i/=10)
		{
		digit=i%10;
		sum=(sum*10)+digit;
		}
	return sum;
	}
int main()
{
long long int a,b;
scanf("%ld",&a);
scanf("%ld",&b);
printf("%d",a+rev(b));
return 0;
}
