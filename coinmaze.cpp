//https://www.hackerrank.com/challenges/coin-on-the-table
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
#include <string.h>
#include<string>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(i=0; i<n; i++)
#define N 100005
#define mod 1000000007

typedef vector<int> vi;
typedef pair <int, int> ii;

int mint=100000,n,m,k;
char s[60][60];
int move(int i,int j,int cnt,int t){

     if(i==1&&j==1){
          if(cnt<mint){
               cout<<"Reached with "<<cnt<<endl;
               mint=cnt;return 0;
          }
     }
     if(i==0||i==n+1||j==0||j==m+1||t>=k){return 0;}

     if(s[i-1][j]=='D'){move(i-1,j,cnt,t+1);}        // actually up
     else{move(i-1,j,cnt+1,t+1);}

     if(s[i][j-1]=='R'){move(i,j-1,cnt,t+1);}     //left
     else{move(i,j-1,cnt+1,t+1);}
     
     /*
     if(s[i+1][j]=='U'){move(i+1,j,cnt,t+1);}     //down
     else{move(i+1,j,cnt+1,t+1);}

     if(s[i][j+1]=='L'){move(i,j+1,cnt,t+1);}     //right
     else{move(i,j+1,cnt+1,t+1);}
     */

}
int main(){
     int i,j,iloc,jloc,total_moves,ktemp,a[60][60],right_moves=0,left_moves=0;
     int down_moves=0,up_moves=0;
     cin>>n>>m>>k;
     for(i=1;i<=n;i++){
          for(j=1;j<=m;j++){
               cin>>s[i][j];
               if(s[i][j]=='*'){iloc=i;jloc=j;}
          }
     }
     total_moves=iloc+jloc-2;
     if(k<total_moves){cout<<-1;return 0;}
     i=1;j=1;
     ktemp=k;
     while(ktemp--){
          if(s[i][j]=='*'){
               cout<<0;return 0;
          }
          else{
               if(s[i][j]=='R'){j++;}
               if(s[i][j]=='L'){j--;}
               if(s[i][j]=='D'){i++;}
               if(s[i][j]=='U'){i--;}
               if(i==0||i==n+1||j==0||j==m+1){break;}
          }
     }
     move(iloc,jloc,0,0);
     cout<<mint;
  return 0;
}
