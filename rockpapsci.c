#include<stdio.h>
#include<string.h>
int min(long a,long b)
    {
    if(a<b)
        {return a;}
    else
        {return b;}
    }
int gcd(long a,long b)
    {
    int i;
    for(i=min(a,b);i>0;i--)
        {
        if((a%i==0)&&(b%i==0))
            {
            return i;
            }
        }
    }

int lcm(long a,long b)
    {
    return ((a*b)/gcd(a,b));
    }

int main()
{
long long n=0,count1=0,count2=0,i=0;
int j=0,k=0,xtr1=0,xtr2=0;
char a[1500],b[1500];
scanf("%ld",&n);
scanf("%s",a);
scanf("%s",b);
int lc=lcm(strlen(a),strlen(b));
for(i=0;i<min(lc,n);i++)
{
    
    if(  (a[j]=='R'&&b[k]=='S')  || (a[j]=='S'&&b[k]=='P') || (a[j]=='P'&&b[k]=='R') )
        {
        count1++;
        }
    else if(a[j]==b[k])
        {
           }
    else
    {
    count2++;
    }
    if(i==((n%lc)-1)&&(min(lc,n)==lc)&&((n%lc)!=0))
        {
          xtr1=count1;
          xtr2=count2;
        }
    j++;
    k++;
if(k==strlen(b))
    {k=0;}
if(j==strlen(a))
    {j=0;}
    
}

printf("%ld ",(count2*(n/min(lc,n)))+xtr2);
printf("%ld",(count1*(n/min(lc,n)))+xtr1);
return 0;
}