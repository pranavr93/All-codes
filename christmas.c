#include<stdio.h>
#include<string.h>
int main()
{
int i,sum1=0,sum2=0,sum3=0,prod1=1,prod2=1,prod3=1;
char a[100],b[100],c[100];
scanf("%s",a);
scanf("%s",b);
scanf("%s",c);

if(strlen(a)+strlen(b)!=strlen(c){printf("NO");return 0;}

for(i=0;i<strlen(a);i++)
	{
	prod1*=(a[i]-64);
	sum1+=(a[i]-64);
	}

for(i=0;i<strlen(b);i++)
	{
	prod2*=(b[i]-64);
	sum2+=(b[i]-64);
	}

for(i=0;i<strlen(c);i++)
	{
	prod3*=(c[i]-64);
	sum3+=(c[i]-64);
	}
if((sum1+sum2==sum3)&&(prod1*prod2==prod3))
	{
	printf("YES");
	}
return 0;
}