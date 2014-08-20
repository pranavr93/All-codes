#include<stdio.h>
int main()
{
int n,a1,b,c,i,j,k,max=0,min,a[3];
scanf("%d %d %d %d",&n,&a[0],&a[1],&a[2]);
min=a[0];
for(i=0;i<=2;i++)
    {
    if(a[i]>=max)
        {
         max=a[i];
        }
    if(a[i]<=min)
            {min=a[i];}
    }
 a1=min;
 b=a[0]+a[1]+a[2]-max-min;
 c=max;
 max=0;
 if(n%a1==0)
     {printf("%d",n/a1);return 0;}
     
 if(a1==b)
 {
 for(i=0;i<=(n/c);i++)
    {
       for(k=0;k<=(n/a1);k++)
            {
            
                if(((a1*k)+(c*i))==n)
                {
                 {printf("%d",i+k);return 0;}                
                 }
                  if(((a1*k)+(c*i))>n)
                      {break;}
             }
    }
 
 }
 for(i=0;i<=(n/c);i++)
    {
    for(j=0;j<=(n/b);j++)
        {
        for(k=0;k<=(n/a1);k++)
            {
            
                if(((a1*k)+(b*j)+(c*i))==n)
                {
                if(b==c)
                    {printf("%d",i+j+k);return 0;}
                if((i+j+k)>max)
                {max=i+j+k;}
                }
                if(((a1*k)+(b*j)+(c*i))>n)
                    {break;}                
            }
        }
    }
printf("%d",max);
return 0;
}