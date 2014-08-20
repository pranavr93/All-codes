#include<stdio.h>
int main()
{
int a,b,c,k,i,j,count;
scanf("%d %d %d",&a,&b,&c);
k=a*c;
for(i=1;i<=((k/b)+1);i++)
    {count=0;
    if(((k-(b*i))/(float)b)<=(float)i)
            {
            for(j=i;j<=(c+i);j++)
                {
                if((b*j)>=((j-i)*a))
                {
                   count++;
                }
                if(count==(c+1))
                { printf("%d",i);return 0;}
                }
            }    
      }
return 0;
}