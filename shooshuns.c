#include<iostream>
using namespace std;
long long a[1005][1005]={0},n,m,k,i,x,y,j;
void rswap()
{
    for(i=0;i<m;i++)
    {
        a[x-1][i]=a[y-1][i]+a[x-1][i];
        a[y-1][i]=a[x-1][i]-a[y-1][i];
        a[y-1][i]=a[x-1][i]-a[y-1][i];
    }
}
void display()
{ cout<<endl;
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void cswap()
{
      for(i=0;i<n;i++)
    {
        a[i][x-1]=a[i][y-1]+a[i][x-1];
        a[i][y-1]=a[i][x-1]-a[i][y-1];
        a[i][y-1]=a[i][x-1]-a[i][y-1];
    }
}
int main()
{
char ch;
    cin>>n;
    cin>>m;
    cin>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<k;i++)
    {
        cin>>ch;
        cin>>x;
        cin>>y;
        if(ch=='r'){rswap();}
        if(ch=='c'){cswap();}
        if(ch=='g'){cout<<a[x-1][y-1]<<endl;}
        display();
    }

    return 0;
}
