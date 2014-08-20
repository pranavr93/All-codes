#include<stdio.h>
int main()
{
long long a[100010]={0},b[10010]={0},i,n,k,max=0;
scanf("%ld",&n);
for(i=0;i<n;i++)
	{
	scanf("%ld",k);
	a[k]++;
	scanf("%ld",k)
	b[k]++;
	}
if(n%2==0)
{
	for(i=0;i<n;i++)
	{
	if(a[i]>=n/2){printf("0");return 0;}
	if(a[i]+b[i]>=n/2)
		{
		if(a[i]>max)
			{
			max=a[i];
			}
		}
		
	}
	if(max==0){printf("-1");return 0;}
	printf("%ld",n/2-max);return 0;
}
else{
	for(i=0;i<n;i++)
	{
	if(a[i]>=(n/2+1)){printf("0");return 0;}
	if(a[i]+b[i]>=(n/2+1))
		{
		if(a[i]>max)
			{
			max=a[i];
			}
		}
		
	}
	if(max==0){printf("-1");return 0;}
	printf("%ld",((n/2+1)-max));return 0;
}
return 0;
}