#include<stdio.h>
int main()
{
int n,a[200][2],p=0,q=0,r=0,s=0,count=0,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i][0]);
    scanf("%d",&a[i][1]);
    }

for(i=0;i<n;i++)
    {
    p=0;q=0;r=0;s=0;
    for(j=0;j<n;j++)
        {
        if((a[j][0]>a[i][0])&&(a[j][1]==a[i][1]))
            {
            p=1;
            }
        if((a[j][0]<a[i][0])&&(a[j][1]==a[i][1]))
            {
            q=1;

            }
        if((a[j][0]==a[i][0])&&(a[j][1]>a[i][1]))
            {
            r=1;
            
            }
        if((a[j][0]==a[i][0])&&(a[j][1]<a[i][1]))
            {
            s=1;
            }

        }
    if((p+q+r+s)==4)
        {
         printf("%d %d\n",a[i][0],a[i][1]);
        count++;
        }
    }
printf("%d",count);
return 0;
}