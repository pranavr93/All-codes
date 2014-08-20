#include<stdio.h>
int main()
{
char a[100010],b[100010];
int i,,jcount=0;
scanf("%s",a);
scanf("%s",b);
if(strlen(a)!=strlen(b))
	{
	printf("NO");return 0;
	}
for(i=0;i<strlen(a);i++)
	{
	if(a[i]!=b[i])
		{
		count++;
		}
	}
if(count!=2)
	{
	printf("NO");return 0;
	}
for(i=0;i<strlen(a);i++)
{
	if(a[i]!=b[i])
	{
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]!=b[j])
			{
				if(a[i]==b[j]&&b[i]==a[j]){printf("YES");return 0;}
			}
		}
	}
}

return 0;
}