#include<stdio.h>
int main()
{
int t,i,k,j;
long int a[10000];
scanf("%d",&t);
for(i=0;i<t;i++)
	{
	scanf("%ld",&a[i]);
	}
for(i=0;i<t;i++)
	{
	j=a[i]+1;
	k=j;
		while(1){
		if(k%(4*a[i])==0)
		{printf("%d\n",(k/j)+1);break;}
		else
		k=k+j;
	}       }
return 0;
}