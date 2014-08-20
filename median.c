#include<stdio.h>
int m=0;
int mod(long n)
    {
    if(n>0)
        {return n;}
    else
        {return -n;}
    }
int min(long a,long b)
    {
    if(a<b)
        {return a;}
    else
        {return b;}
    }
void getdata(long int arr[],int n,long int x)
{
 int i;
   for(i=0;i<n;i++)
    {
     scanf("%ld",&arr[i]);
    if(arr[i]==x)
        {m=1;}
            
    }
}
void sort(long int arr[],int low,int mid,int high)
{
 int i,j,k,l;
 long int b[500];
 l=low;
 i=low;
 j=mid+1;
 while((l<=mid)&&(j<=high))
   {
    if(arr[l]<=arr[j])
      {
       b[i]=arr[l];
       l++;
      }
    else
      {
       b[i]=arr[j];
       j++;
      }
    i++;
   }
 if(l>mid)
   {
    for(k=j;k<=high;k++)
       {
        b[i]=arr[k];
        i++;
       }
   }
 else
   {
    for(k=l;k<=mid;k++)
       {
        b[i]=arr[k];
        i++;
       }
   }
 for(k=low;k<=high;k++)
    {
     arr[k]=b[k];
    }
}

void partition(long int arr[],int low,int high)
{
 int mid;
 if(low<high)
   {
    mid=(low+high)/2;
    partition(arr,low,mid);
    partition(arr,mid+1,high);
    sort(arr,low,mid,high);
   }
}


    
int main()
{
int n,m2=510,i,min1;
long int arr[500],x;
scanf("%d",&n);
scanf("%ld",&x);
getdata(arr,n,x);
partition(arr,0,n-1);
if(m==1)
    {
    for(i=0;i<n;i++)
        {
        if(arr[i]==x)
            {
            m=i;
            if((i+1)>n/2)
            {
            printf("%d",(2*i-n)+1);return 0;
             }
            min1=n-(2*m)-2;
            while(arr[i+1]==arr[i])
                {i++; 
                if((n+1)/2==i+1){printf("0");return 0;}      
                m2=i;
                if((mod(n-(2*m2)-2))<min1){min1=mod(n-(2*m2)-2);}
                }
                
                
              }
        }
         printf("%d",min( mod(n-(2*m)-2),min1 ) );return 0;
    }

if(x<arr[0])
    {
    printf("%d",n);return 0;}
if(x>arr[n-1])
    {
    printf("%d",n+1);return 0;
    }

for(i=0;i<n;i++)
    {
    if(x<arr[i])
        {break;}
        
    }
    
if((i+1)>n/2)
    {
    printf("%d",(2*i-n)+1);return 0;
    }
else {
    printf("%d",n-2*i);return 0;
    }
return 0;
}


