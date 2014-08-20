#include<stdio.h>
int main()
{
int n,k,i,j,count=0,x,y;
int a[51][51];
scanf("%d",&n);
scanf("%d",&k);
for(i=1;i<=50;i++)
    {
    for(j=1;j<=50;j++)
        {a[i][j]=0;}
    }
for(i=0;i<n;i++)
    {
    scanf("%d",&x);
    scanf("%d",&y);
    a[x][y]=a[x][y]+1;
    }
for(i=50;i>0;i--)
    {
    for(j=1;j<=50;j++)
        {
        if(a[i][j]>0)
            {
            count+=a[i][j];
            }
        if(count>=k)
            {printf("%d",a[i][j]);return 0;}
        }
    }
return 0;
}