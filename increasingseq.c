#include<stdio.h>
int main()
{
long n,d,i,a[2000],k=0,count=0;
scanf("%ld",&n);
scanf("%ld",&d);
for(i=0;i<n;i++)
    {scanf("%ld",&a[i]);}
for(i=1;i<n;i++)
    {
    if(a[i]>a[i-1])
        {continue;}
    else{
        k=a[i-1]-a[i];
        {count+=((k/d)+1);}
        a[i]+=(((k/d)+1)*d);
        }
   }
printf("%ld",count);
return 0;
}