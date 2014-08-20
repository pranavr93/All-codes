#include<stdio.h>
int main()
{
int n,a[205],k;
scanf("%d",&n);
if(n==1){printf("NO");return 0;}

for(i=0;i<205;i++){a[i]=0;}
for(i=0;i<n;i++)
	{
	scanf("%d",&k);
	a[k+100]++;
	}
if(a[k+100]==n){printf("NO");return 0;}
k=0;
for(i=0;i<205;i++)
	{
	if(a[i]==1){k=1;}
	if(a[i]==1&&k==1){printf("%d",i-100);return 0;}
	}
return 0;
}