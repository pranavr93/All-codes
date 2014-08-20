#include<stdio.h>
#include<string.h>
int main()
{
char s[100000];
int max,j=0,k,i;
scanf("%s",s);
k=strlen(s);
while(j<k)
{
max=0;
    for(i=j+1;i<k;i++)
    {
    if(s[i]>max)
        {
        max=s[i];
        }
    }
    for(i=j+1;i<k;i++)
        {
        if(s[i]==max)
            {
            printf("%c",max);
            j=i;
            }
            
        }
        if(j==k-1)
                {return 0;}
  
}
return 0;
}