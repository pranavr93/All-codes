#include<stdio.h>
#include<string.h>
int main()
{
    int a[30]={0},j,i,k,count=0,n=0;
    char s[1010],str[1010]={},ch;
    scanf("%d",&k);
    scanf("%c",&ch);
    gets(s);
    if(strlen(s)%k!=0){printf("-1");return 0;}
    for(i=0;i<strlen(s);i++)
    {
        j=(int)s[i]-97;
        a[j]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]>0)
            {
                n++;
                if(a[i]%k==0)
                {
                    count++;
                }
            }
    }
    j=0;
    if(n==count)
        {
            for(int m=1;m<=k;m++)
            {
          for(i=0;i<26;i++)
         {
            if(a[i]>0)
            {
                for(int l=1;l<=a[i]/k;l++)
                {
                    str[j++]=i+97;
                }
            }
         }
         }
        }
        else{printf("-1");return 0;}
        printf("%s",str);
    return 0;
        
}

