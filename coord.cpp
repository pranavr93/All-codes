#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
# define EPS 1.19209e-007
using namespace std;
  int x[100],y[100];
struct point
{
     double x;
     double y;
};
point getcenter(int i,int j,int k)
{   int flag=0;
    double y1=(y[j]+y[i])/2.0;
    double x1=(x[j]+x[i])/2.0;
    double y2=(y[j]+y[k])/2.0;
    double x2=(x[j]+x[k])/2.0;

    double m,m1=0,m2=0;

    if(x[j]-x[i]!=0&&y[j]-y[i]!=0)
    {
          m=(y[j]-y[i])/(x[j]-x[i]); m1=-1.0/m;
    }
    if(x[j]-x[i]==0)
    {
          m1=0;
    }
    if(y[j]-y[i]==0){flag=1;}

    double c1=y1-x1*m1;

    double c;
    if(x[j]-x[k]!=0&&y[j]-y[k]!=0)
     {
      m=(y[j]-y[k])/(x[j]-x[k]); m2=-1.0/m;
     }
     if(x[j]-x[k]==0){m2=0;}
     if(y[j]-y[k]==0){flag=2;}


    double c2=y2-x2*m2;



   point p;
   if(m1==m2){p.x=1000.0;p.y=1000.0;return p;}
   p.x=(c2-c1)/(m1-m2);
   if(flag==0){ p.y=(c1*m2-m1*c2)/(m2-m1);  }
   else if(flag==1){p.y=y1;}
   else if(flag==2){p.y=y2;}
  // cout<<m1<<c1<<endl<<m2<<c2<<endl<<endl;
   return p;


}
double getDist(int i,int j)
{
     return sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2));
}
double getDist1(point p,int j)
{
     return sqrt(pow(p.x-x[j],2)+pow(p.y-y[j],2));
}
double getRadius(int i,int j,int k)
{
  double a=getDist(i,j);
  double b=getDist(j,k);
  double c=getDist(k,i);
  double rad=(a+b+c)*(a+b-c)*(a+c-b)*(b+c-a);
  rad=(a*b*c)/sqrt(rad);
  return rad;

}
int main()
{
     cout<<EPS;
     int t,n,i,count=0,j,w,k;

     cin>>t;
     while(t--)
     {
     count=0;
          cin>>n;
          for(i=0;i<n;i++)
          {
          cin>>x[i];
          cin>>y[i];
          }

          for(i=0;i<n;i++)
          {
               for(j=i+1;j<n;j++)
               {
                    for(k=j+1;k<n;k++)
                    {
                       point p=getcenter(i,j,k);

                       if(p.x==1000){continue;}
                       double rad=getRadius(i,j,k);

                       for(w=0;w<n;w++)
                       {
                           if(w==i||w==j||w==k){continue;}
                           if(getDist1(p,w)<=rad){count++;cout<<i<<" "<<j<<" "<<k<<" "<<w<<getDist1(p,w)<< p.x<<" "<<p.y<<" " <<rad<<endl;}

                       }
                    }
               }
          }
          cout<<count<<" ";
          double result=(double)count/ (n*(n-1)*(n-2)*(n-3)/6);
          printf("%0.8f\n\n\n",result);
     }
     return 0;
}
