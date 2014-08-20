#include<stdio.h>
int main()
{
int k,l,m,n,count=0;;
long int d;
scanf("%d %d %d %d %ld",&k,&l,&m,&n,&d);
for(i=1;i<=d;i++)
	{
	if(i%l==0)||(i%k==0)||(i%m==0)||(i%n==0)
		{count++;}
	}
printf("%d",count);
return 0;
}