#include<stdio.h>
#include<math.h>
int check(long long int k)
{    
   
     if( ((-1+sqrt(1+4*2*k))/(float)2) -int((-1+sqrt(1+4*2*k))/2)==0)
        {
         return 1;
        }
else
    {return 0;}


}

int main()
{
long long int n=0,k=0,i=0;
scanf("%ld",&n);
for(i=1;(pow(i,2)+i)<=n;i++)
    {
    if(n==1)
        {printf("NO");return 0;}
   
     k=n-((i*(i+1))/2);
     
     if(((i*(i+1)))==n)
        {
         printf("YES");return 0;
        }

      if(check(k))
        {
              printf("YES");return 0;
        }
    }
printf("NO");
return 0;
}