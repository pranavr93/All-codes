#include<stdio.h>
int main()
{
long int n,ans;
scanf("%d",&n);
ans=((pow(4,n)+pow(2,n))/2)%1000000007;
printf("I64d",ans);
return 0;
}