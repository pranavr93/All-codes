#include<stdio.h>
int main()
{
long n,m,i;
long long x,y,a[100000],b[100000];
scanf("%ld",&n);
scanf("%ld",&m);
scanf("%ld",&x);
scanf("%ld",&y);
for(i=0;i<n;i++)
	{
	scanf("%ld",&a[i]);
	}
for(i=0;i<m;i++)
	{
	scanf("ld",&b[i]);
	}
while(i<n && j<m)
	{
	if(  (a[i]-x<b[j]) && (b[j]>a[i]+y) )
		{
		printf("%ld ",a[i]);
		printf("%ld\n",b[j]);
		i++;j++;continue;
		}
	if( a[i]+y<b[j] )
		{
		j++;continue;	
		}
	if(a[i]-x>b[j] )
		{
		i++;continue;
		}

	}
return 0;
}