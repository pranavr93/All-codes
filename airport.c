#include<iostream>
using namespace std;
int main()
{
    int a[1010]={0},b[1010]={0},n,m,temp=0,sum=0,i,j;
    cin>>n;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>temp;
        a[temp]++;
        b[temp]++;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1001;j>0;j--)
        {
            if(a[j]>0)
            {
                sum+=j;
                a[j]--;
                a[j-1]++;
                break;
            }
        }
    }
    cout<<sum<<" ";
    sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<1005;j++)
        {
            if(b[j]>0)
            {
                sum+=j;
                b[j]--;
                b[j-1]++;
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}