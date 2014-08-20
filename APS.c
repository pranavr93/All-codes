#include<stdio.h>
#include<string.h>
int main()
{
long long int k,ans=0,count=0,i,j;
int stop=1;
char s[1000000];
scanf("%I64d",&k);
scanf("%s",s);
for(i=0;i<strlen(s);i++)
    {
    stop=1;
    count=0;
    j=i;
    while(stop)
        {
            if(s[j]=='1')
            {count++;}
            if(count==k)
            {ans++;}
        if(count>k)
            {stop=0;}
            j++;
        if(j==strlen(s))
            {stop=0;}
                
        }   
    }
printf("%I64d",ans);
return 0;
}