#include<stdio.h>
int main()
{
int n,m,ret=0;
char s[1500][1500];
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
	{
	scanf("%s",s[i]);
	}
for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
		{
		if(s[i][j]=='s')
			{
			k=i;
			l=j;
			}
		}
	}
x=k;
y=l;
while(ret=1)
	{
	if(y==0)
		{
		




	if(s[x][y+1]==".")
		{
		y++;
		continue;
		}
	
	if(s[x+1][y]==".")
		{
		x++;
		continue;
		}
	
	if(s[x][y-1]==".")
		{
		y--;
		continue;
		}
	
	if(s[x-1][y]==".")
		{
		x=x--;
		continue;
		}
	
	else
		{
		
		}
	}

return 0;
}