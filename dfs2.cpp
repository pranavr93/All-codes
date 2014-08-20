/* Author : Pranav
BITS PILANI Hyderabad Campus */
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
#define fr(i,n) for(i=1; i<=n; i++)
#define N 100005
#define mo 1000000007
#define f first
#define s second
typedef vector<int> vi;
typedef pair <int, int> paint;
typedef long long ll;


int answer[30000]={0};

struct node
{
     int index;
     int flag;
     struct node *next;
};
struct node *a[30005];
struct node *temp[30005];
struct node *temp1;

void scanint(int *z)
{
    int t, neg = 0;
    register int c = getchar_unlocked();
    t=*z;
    t = 0;
    for(;((c<48 || c>57) && c != '-');
    c = getchar_unlocked());
    if(c=='-')
    {
        neg=1;
        c=getchar_unlocked();
    }
    for(;c>47 && c<58;c = getchar_unlocked())
        t = (t<<1) + (t<<3) + c - 48;
    if(neg)
        t=-t;
    *z=t;
}

void dfs(struct node *tem,long long flag2,long long prevind)
{
 //    cout<<tem->index<<" ";
         if(flag2==1&&tem->flag!=0){
          tem->flag=0;
            if(answer[tem->index]==0)
            {
            answer[tem->index]=prevind;
            }
            prevind=tem->index;
            dfs(a[tem->index],1,prevind);
             dfs(tem->next,0,prevind);
         }

         else if(tem!=NULL&&tem->flag!=0)
         {
          if(answer[tem->index]==0){answer[tem->index]=prevind;}
             tem->flag=0;
          //   prevind=tem->index;
             dfs(a[tem->index],1,prevind);
             dfs(tem->next,0,prevind);
         }

}
int main()
{
int x,y,tempo,t,n,h1,h2,i;

cin>>t;
while(t--){

scanint(&n);
scanint(&h1);
scanint(&h2);
  // cin>>n>>h1>>h2;
   fr(y,n){a[y]=NULL;answer[y]=0;}
   fr(y,n){
     if(y==h1){continue;}
     scanint(&x);
       if(a[x]==NULL)
       {
          a[x]= (struct node*) malloc(sizeof(struct node));
          a[x]->index=x;
          a[x]->flag=1;
          temp1 = (struct node*) malloc(sizeof(struct node));
          temp1->index=y;
          temp1->flag=1;
          temp1->next=NULL;
          a[x]->next=temp1;
          temp[x]=temp1;
       }
       else
       {
          temp1 = (struct node*) malloc(sizeof(struct node));
          temp1->index=y;
          temp1->flag=1;
          temp1->next=NULL;
          temp[x]->next=temp1;
          temp[x]=temp1;
       }
       if(a[y]==NULL)
       {
          a[y]= (struct node*) malloc(sizeof(struct node));
          a[y]->index=y;
          a[y]->flag=1;
          temp1 = (struct node*) malloc(sizeof(struct node));
          temp1->index=x;
          temp1->flag=1;
          temp1->next=NULL;
          a[y]->next=temp1;
          temp[y]=temp1;
       }
       else
       {
          temp1 = (struct node*) malloc(sizeof(struct node));
          temp1->index=x;
          temp1->flag=1;
          temp1->next=NULL;
          temp[y]->next=temp1;
         temp[y]=temp1;
       }

   }
   answer[h2]=-1;
   dfs(a[h2],1,-1);
/*for(i=1;i<=n;i++){         // Display graph
     temp1=a[i];
     while(temp1!=NULL)
     {
          cout<<temp1->index<<" ";
          temp1=temp1->next;
     }
     cout<<endl;
}   */


for(i=1;i<=n;i++){
     if(i==h2){continue;}
     cout<<answer[i]<<" ";
}
cout<<endl;


   } // end of while
   return 0;
}
