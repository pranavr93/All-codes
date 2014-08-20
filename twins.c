#include<stdio.h>
int sum=0;
void getdata(int arr[],int n)
{
 int i;
   for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
	sum+=arr[i];
    }
}


void sort(int arr[],int low,int mid,int high)
{
 int i,j,k,l,b[100];
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

void partition(int arr[],int low,int high)
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


void main()
{
 int arr[100];
 int n,final=0,k;
 scanf("%d",&n);
k=n;
 getdata(arr,n);
 partition(arr,0,n-1);
 
while(final<(sum/2))
	{
	final+=arr[--k];
	}
printf("%d",n-k);

}