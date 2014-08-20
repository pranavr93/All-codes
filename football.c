#include<stdio.h>
#include<string.h>
int main()
{
int a[5][2],k=2,i,j,x[5]={0,0,0,0,0},y[5]={0,0,0,0,0},count=0;
char c1[5][21],c2[5][21],c[5][4],final[4][21];

for(i=0;i<5;i++)
{
	scanf("%s",c1[i]);
	scanf("%s",c2[i]);
	if(i==0)
		{
		strcpy(final[0],c1[0]);
		strcpy(final[1],c2[1]);
		continue;
		}

	if(i>0)
	{
	count=0;	
	for(j=0;j<k;j++)
		{
		if(strcmp(final[j],c1[i]==0)
			{
			break;
			}
		count++;
		}
		if(count==k){strcpy(final[k++],c1[i]);}
	}

	if(i>0)
	{
	count=0;	
	for(j=0;j<k;j++)
		{
		if(strcmp(final[j],c2[i]==0)
			{
			break;
			}
		count++;
		}
		if(count==k){strcpy(final[k++],c2[i]);}
	}

scanf("%s",c[i]);	
}

for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
		{
		if(strcmp(final[j],c1[i])==0)
			{	
			x[j]+=(c[i][0]-48);
			y[j]+=(c[i][2]-48);
			}
		if(strcmp(final[j],c1[i])==0)
			{
			x[j]+=(c[i][2]-48);
			y[j]+=(c[i][2]-48);		
			}
		}
	}












return 0;
}