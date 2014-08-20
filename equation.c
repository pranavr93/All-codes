#include<stdio.h>
int main()
{
int n,b,a[100],max=0,sum=0;
float add;
scanf("%d",&n);
scanf("%d",&b);
for(i=0;i<n;i++)
	{
	scanf("%d",a[i]);
	if(a[i]>max)
		{
		max=a[i];
		}
	}
for(i=0;i<n;i++)
	{
	sum+=(max-a[i]);
	}
add=(b-sum)/(float)n;
for(i=0;i<n;i++)
	{
	printf("%.6f\n",((float)max-(float)a[i]+add));
	}
return 0;
}