#include<stdio.h.>
int main()
{
int a[101],b[101],m,n,i,hcf=1;
scanf("%d %d",&n,&m);
for(i=0;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<=m;i++)
    {
    scanf("%d",&b[i]);
    }
if(n>m&&(a[0]*b[0]>0))
    {
    printf("Infinity");
    return 0;
    }
if(n>m&&(a[0]*b[0]<0))
    {
    printf("-Infinity");
    return 0;
    }
    
if(n==m)
    {
    for(i=1;i<=m;i++)
        {
        if((m%i==0)&&(n%i==0))
            {
            hcf=i;
            }
         }
	printf("%d",hcf);
if(b[0]<0)
    {
     printf("%d/%d",(-a[0]/hcf),(-b[0]/hcf))
        ;return 0;}
else
    {
     printf("%d/%d",(a[0]/hcf),(b[0]/hcf))
        ;return 0;}
    }   


if(n<m)
    {
    printf("0/1");return 0;
    }
return 0;
}