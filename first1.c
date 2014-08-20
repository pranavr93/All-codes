#include<stdio.h>
int main()
{
int n,p[100],i;
float a[100],sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d",&p[i]);
	a[i]=p[i]/(float)100;
	sum+=a[i];
	}
sum=sum/n;
printf("%.12f",sum*100);
return 0;
}
