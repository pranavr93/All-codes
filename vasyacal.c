#include<stdio.h>
int main()
{
long long int d=0,a=0,count=0;
int n,i;
scanf("%ld",&d);
scanf("%d",&n);

for(i=1;i<n;i++)
    {
    scanf("%ld",&a);
    count+=(d-a);
    }
    scanf("%ld",&a);
printf("%ld",count);
return 0;
}