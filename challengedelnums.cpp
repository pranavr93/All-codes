    /* Author : Pranav
BITS PILANI Hyderabad Campus */
// August long challenge
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define N 100005
#define mo 1000000007
#define f first
#define s second
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;
int store[1000005][2];
int data[100010];
vector<int> a;
void scanint(int *z)
{
    int x, neg = 0;
    register int c = getchar_unlocked();
    x=*z;
    x = 0;
    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());
    if(c=='-')
    {
        neg=1;
        c=getchar_unlocked();
    }
    for(;c>47 && c<58;c = getchar_unlocked())
        x = (x<<1) + (x<<3) + c - 48;
    if(neg)
        x=-x;
    *z=x;
}
int main(){

    int n,i,flag,index,k,j,count=0,pa,P,temp,c,val,flag2max=-5;
     cin>>n;
     //a.pb(0);
     for(i=1;i<=n;i++){
        scanint(&k);
        data[k]++;
        if(data[k]>max){max=k;}
         a.pb(k);
     }
     //If only one number is unequal
     if(n>=99000&&data[max]>80000)
     {
          cout<<1+ n-data[max]<<endl;
          for(i=0;i<n;i++)
          {
            if(a[i]!=max)
            {
               cout<<i+1<<" "<<n-i<<endl;
            }
          }
          cout<<1<<" "<<1<<endl;
     }

     
     
     
     
     index=0;
     // Check 1
     // If all numbers are same v=1,t=1;
     flag=0;
     for(i=0;i<a.size()-1;i++){if(a[i]!=a[i+1]){flag=1;}}
     if(flag==0){cout<<1<<endl<<1<<" "<<1<<endl;return 0;}
     //----------------------------------------------------

     //Check 2
     // Find some periodic set of elements which repeat, and remove them
     count=0;
     vector<int>::iterator it;
     //P=99000;
     pa=0;
//if(n<=P){pa=0;}
//else{cout<<a.size()<<endl;goto label;}
//else if(n<=100000){pa=n-0000;}


     for(i=a.size()-1;i>=pa;i--)
          {
               flag2=0;
             flag=0;
               val=a[i];
          if(data[val]==1){goto lab2;}

               for(j=i-1;j>=0;j--)
               {
                    if(data[val]<=3){break;}
                    if(a[j]==a[i])
                    {
                         if(flag2==0){flag2=1;continue;  }
                    temp=i-j;;

                         count++;
                         it=a.begin()+i;
                         a.erase(it);
                         data[val]--;
                         it=a.begin()+j;
                         a.erase(it);
                         data[val]--;
                         flag=1;

                         c=1;
                          store[index][1]=i-j;
                         if(j-c*temp<0){goto lab;}
                         while((j-c*temp)>=0&&val==a[j-c*temp])
                         {
                            it=a.begin()+j-c*temp;
                            a.erase(it);
                            data[val]--;
                            i--;
                            c++;

                         }
                         lab:

                         store[index][0]=j-(c-1)*temp+1;;

                         i--;
                         index++;
                         break;
                  //  cout<<j+1<<" "<<i-j<<endl<<endl;
                    }
               }
               lab2:
               if(flag==0){
               count++;store[index][0]=i+1;store[index][1]=1;index++;
               it=a.begin()+i;
               a.erase(it);
               data[val]--;
               }
          }




     //----------------------------------------------------
   /*  flag=0;
     for(i=1;i<=a.size()-1;i++){if(a[i]!=a[i+1]){flag=1;}}
     if(flag==0){cout<<count+1<<endl<<1<<" "<<1<<endl;return 0;}
     */



    if(pa!=0){ printf("%d\n",count+a.size());}
    else{cout<<count<<endl;}
     if(index==0){}
     else
     {
          for(i=0;i<index;i++){printf("%d %d\n",store[i][0],store[i][1]);}
          if(pa==0){return 0;}
     }

     // Brute force , keep printing from last to first element
    // cout<<a.size()<<endl;
    label:
     for(i=a.size();i>=1;i--){
          printf("%d 1\n",i);
     }

     // -------------------------------
  return 0;
}
