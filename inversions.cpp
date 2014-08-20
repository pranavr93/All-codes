#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
long long count1=0;
long long b[100005],arr[100005];
void getdata(long long n)
{
 long long i;
   for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
}
void sort(long long low,long long mid,long long high)
{
 long long i,j,k,l;
 l=low;
 i=low;
 j=mid+1;
//cout<<low<<" "<<mid<<" "<<high<<"    ";
 while((l<=mid)&&(j<=high))
   {
    if(arr[l]<=arr[j])
      {
       b[i]=arr[l];
       l++;
      }
    else
      {
        //printf("Count was incremeneted for : %d %d\n",l,j);
        count1+=(mid-l+1);
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
    count1+=((mid-l+1)*(high-j+1));
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

void partition(long long low,long long high){
 long long mid;
 if(low<high){
    mid=(low+high)/2;
    partition(low,mid);
    partition(mid+1,high);
    sort(low,mid,high);
   }
}

int main(){
long long n,t;
   cin>>t;
    while(t--){
        count1=0;
     cin>>n;
     getdata(n);
     partition(0,n-1);
     cout<<count1<<endl;
    }
return 0;
}

