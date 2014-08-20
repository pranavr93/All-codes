#include<stdio.h>
int main()
{
long t1,t2,x1,x2,t,i1=0,j1=0,i,j,k,l,sum;
float min=1000000;
scanf("%ld %ld %ld %ld %ld",&t1,&t2,&x1,&x2,&t);
for(i=0;i<=x1;i++)
    {
    for(j=0;j<=x2;j++)
        {
           if(i+j==0)
               {continue;
                  }
        if( ((t1*i+t2*j)%(i+j)==0)&&(((t1*i+t2*j)/(i+j))==t))   
            {
            i1=i;j1=j;
            sum=i1+j1;
                for(k=i1;k<=x1;k++)
                   { for(l=j1;l<=x2;l++)
                            {
                             if( ((t1*k+t2*l)%(k+l)==0)&&(((t1*k+t2*l)/(k+l))==t))
                                     {
                                        if(k+l>sum)
                                        {
                                        sum=k+l;
                                         i1=k;j1=l;}}
                               }}
                printf("%d %d",i1,j1);return 0;     
            }
        else
            {
            if(( ((t1*i+t2*j)/(float)(i+j))<=min)&&(((t1*i+t2*j)/(float)(i+j))>t))
                {
                min=((t1*i+t2*j)/(float)(i+j));
                i1=i;
                j1=j;
                }
            }
        }
    }
printf("%ld %ld",i1,j1);
return 0;
}