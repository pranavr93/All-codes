#include<iostream>
using namespace std;
typedef long long LL;

LL max(LL a,LL b)
{
if(a>b){return a;}
else{return b;}
}
LL min(LL a ,LL b)
{
if(a<b){return a;}
else{return b;}
}
int main()
{
     LL t,i,j,n,maxsum,minsum,b[10005]={0};
     LL dpmax[10005],dpmin[10005],dpmax2[10005],dpmin2[10005],maxsofar,minsofar,sum;
     LL bdpmax[10005],bdpmin[10005],bdpmax2[10005],bdpmin2[10005],bmaxsofar,bminsofar,final,final2;
     cin>>t;
while(t--)
{
     final=final2=-1000000000;
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>b[i];
     }
     minsofar=maxsofar=b[0];
     bminsofar=bmaxsofar=b[n-1];
     dpmax[0]=dpmax2[0]=dpmin[0]=dpmin2[0]=b[0];
     bdpmax[n-1]=bdpmax2[n-1]=bdpmin[n-1]=bdpmin2[n-1]=b[n-1];
     
     for(i=1;i<n;i++)
     {
          dpmax[i]=max(dpmax[i-1]+b[i],b[i]);
          maxsofar=max(dpmax[i],maxsofar);
          dpmax2[i]=maxsofar;
          
          dpmin[i]=min(dpmin[i-1]+b[i],b[i]);
          minsofar=min(dpmin[i],minsofar);
          dpmin2[i]=minsofar;
     }

     for(i=n-2;i>=0;i--)
     {
          bdpmax[i]=max(bdpmax[i+1]+b[i],b[i]);
          bmaxsofar=max(bdpmax[i],bmaxsofar);
          bdpmax2[i]=bmaxsofar;

          bdpmin[i]=min(bdpmin[i+1]+b[i],b[i]);
          bminsofar=min(bdpmin[i],bminsofar);
          bdpmin2[i]=bminsofar;
     }
    //considering max occurs on left hand side and min on right

    for(i=0;i<n;i++)
    {
    sum=dpmax2[i]-bdpmin2[i+1];
    if(sum>final){final=sum;}

    }
    //considering min occurs on left hand side and max on right
    for(i=0;i<n;i++)
    {
    sum=bdpmax2[i+1]-bdpmin2[i];
    if(sum>final2){final2=sum;}
    }
    cout<<max(final,final2)<<endl;
}

     return 0;
}


/*printing
cout<<"Array is :";
     for(i=0;i<n;i++)
     {
      cout<<b[i]<<" ";
     }
     cout<<endl<<"Dpmax array is:";
      for(i=0;i<n;i++)
     {
      cout<<bdpmax[i]<<" ";
     }
     cout<<endl<<"Dpmax2 array is:";
     for(i=0;i<n;i++)
     {
      cout<<bdpmax2[i]<<" ";
     }

       cout<<endl<<"Dpmin array is:";
      for(i=0;i<n;i++)
     {
      cout<<bdpmin[i]<<" ";
     }
     cout<<endl<<"Dpmin2 array is:";
     for(i=0;i<n;i++)
     {
      cout<<bdpmin2[i]<<" ";
     }
     */
