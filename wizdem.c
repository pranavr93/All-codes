#include<stdio.h>
int main()
{
int n,x,y;
long int k;
scanf("%d %d %d",&n,&x,&y);
k=(n*y)/100;
if(k-x<0||k-x+1<0)
    {printf("0");return 0;}
if((n*y)%100==0)
    {printf("%ld",k-x);
    }
else
    {
    printf("%ld",k+1-x);
    }
    return 0;
}