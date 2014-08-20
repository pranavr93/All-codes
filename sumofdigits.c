#include<stdio.h>
#include<string.h>
long long count=0;
void total(long long sum)
	{long long n=0;
	if(sum<10){printf("%ld",count);return 0;}
	else
	count++;
	for(i=sum;i>0;i/=10)
		{
		n+=(i%10);
		}
	sum(n);

	}


int main()
{
long long int i,sum=0;
char s[100100];
scanf("%s",s);
for(i=0;i<strlen(s);i++)
	{
	sum=(sum+s[i]-'48');
	}
total(sum);
return 0;
}