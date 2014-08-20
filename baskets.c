#include<stdio.h>
int main()
{
long n,m,k,ar[100000],j=0,l,i;
scanf("%ld %ld",&n,&m);
if(m==1)
    {
    for(i=1;i<=n;i++)
        {
        printf("1\n");
        }return 0;
    }
    if(m%2==0)
    {
    k=m/2;
    l=(m/2)+1;
        for(i=1;i<=(n/2)+1;i++)
        {
        
        ar[j++]=k--;
        ar[j++]=l++;
        
        if((2*i)%m==0)
            {
            k=m/2;
            l=(m/2)+1;
            }
        }
    }
else
{
k=m/2+1;
l=m/2;
        for(i=1;i<=(n/2)+1;i++)
        {
        
        ar[j++]=k++;
        if(j%m==0)
            {k=m/2+1;
             l=m/2;
             continue;}
            ar[j++]=l--;
              
        }
}

for(i=0;i<n;i++)
    {
    printf("%d\n",ar[i]);
    }

return 0;
}



2
1
3

2
1
3

2
1
3

2
1
3

2
1
3

0
0
0










