/* Author : Pranav
BITS PILANI Hyderabad Campus */
// x1^d +x2^d+x3^d mod n =m ; number of solutions  1=<x1,x2,x3<=up
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

int main()
     {
     int a[9][9],t,i,j,bx,by,x,y,wx,wy,flag=0,k;
     char ch;
     cin>>t;
     string s1,s2,s3;
     while(t--){
          for(i=0;i<9;i++)
          for(j=0;j<9;j++)a[i][j]=0;
          s1.clear();
          s2.clear();
          cin>>s1>>s2;
          cin>>ch>>s3;

          a[s1[0]-'a'+1][s1[1]-'1'+1]++;
          a[s2[0]-'a'+1][s2[1]-'1'+1]=2;
          bx=s1[0]-'a'+1;
          by=s1[1]-'1'+1;

          wx=s2[0]-'a'+1;
          wy=s2[1]-'1'+1;

          x= s3[0]-'a'+1;
          y= s3[1]-'1'+1;


          if(ch=='k')
          {
               if(a[x-1][y-2]==1|| a[x-2][y-1]==1||a[x-2][y+1]==1||a[x-1][y+2]==1||a[x+1][y-2]==1||a[x+2][y-1]==1||a[x+2][y+1]==1||a[x+1][y+2]==1)
               {
                    cout<<"check\n";continue;
               }
               else{
                    cout<<"-1\n";continue;
               }
          }

          if(ch=='r'||ch=='q')
          {
          flag=0;
            for(i=y;i<=8;i++)
            {
              if(a[x][i]==1){cout<<"check\n";goto label;}
              if(a[x][i]==2){break;}
            }
            for(i=y;i>=1;i--)
            {
              if(a[x][i]==1){cout<<"check\n";goto label;}
               if(a[x][i]==2){break;}
            }
            for(i=x;i>=1;i--)
            {
              if(a[i][y]==1){cout<<"check\n";goto label;}
               if(a[i][y]==2){break;}
            }
            for(i=x;i<=8;i--)
            {
              if(a[i][y]==1){cout<<"check\n";goto label;}
              if(a[i][y]==2){break;}
            }
            if(ch=='q'){flag++;}
            if(ch!='q'){cout<<"-1\n";}
          }
          label:
          k++;

          if(ch=='b'||ch=='q')
          {
             j=y;
             for(i=x;i<=8;i++)
             {
                     if(a[i][j]==1){cout<<"check\n";goto label1;}
                     if(a[i][j]==2){break;}
                     j++;
                     if(j==9){break;}

             }
             j=y;
             for(i=x;i<=8;i++)
             {
                     if(a[i][j]==1){cout<<"check\n";goto label1;}
                     if(a[i][j]==2){break;}
                     j--;
                     if(j==0){break;}

             }
             j=y;
             for(i=x;i>=1;i--)
             {
                     if(a[i][j]==1){cout<<"check\n";goto label1;}
                     if(a[i][j]==2){break;}
                     j++;
                     if(j==9){break;}

             }
             j=y;
             for(i=x;i>=1;i--)
             {
                     if(a[i][j]==1){cout<<"check\n";goto label1;}
                     if(a[i][j]==2){break;}
                     j--;
                     if(j==0){break;}

             }
          if(ch=='q'&&flag==1){cout<<"-1\n";}
          else{cout<<"-1\n";}
          }
           label1:
           k++;



     }
     return 0;
 }

