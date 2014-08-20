#include<stdio.h>
int main()
{
int max,count=0,final[100],i,j,n,m;
char a[100][100];
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++)
    {
        final[i]=0; 
        scanf("%s",a[i]);
    }
for(i=0;i<m;i++)
    {
    max=a[0][i];
    for(j=0;j<n;j++)
        {
	if(a[j][i]=='9')
		{max=a[j][i];break;}
        if(max<=a[j][i])
            {
            max=a[j][i];
            }
        }
        for(j=0;j<n;j++)
        {
            if(a[j][i]==max)
            {
                   final[j]=1;
            }
        }
    }
        
for(i=0;i<n;i++)
    {
    if(final[i]==1)
        {
             count++;
        }
    }
printf("\n%d",count);
return 0;
}