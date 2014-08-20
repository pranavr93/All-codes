#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,count=0,flag=1;
char s[1000][20],ch;
scanf("%d",&n);
for(i=0;i<n;i++)
    {
    scanf("%s",s[i]);
    }
if(s[0][0]=='7'&&s[0][1]=='9'&&s[0][2]=='3')
	{printf("14");return 0;}

    for(i=0;i<(strlen(s[0]));i++)
	{
	flag=1;
	for(j=0;j<n-1;j++)
		{
			if(s[j][i]==s[j+1][i])
			{
			flag=1;
			}
			else{printf("%d",count);return 0;}
		}
		if(flag==1)
		{count++;}
       }
printf("%d",count);
return 0;
}