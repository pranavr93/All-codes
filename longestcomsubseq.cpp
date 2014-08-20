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


  int dp[5005][5005];
int main()
{
     int i,j;

 char s1[5005],s2[5005];
 scanf("%s",s1);

     for(i=0;i<strlen(s1);i++){
          for(j=0;j<strlen(s2);j++){
               if( s1[i]==s2[j]&&(i==0||j==0)){
                    dp[i][j]=1;  continue;
                }
                if(i==0||j==0){dp[i][j]=0;continue;}
               if(s1[i]==s2[j]){
                    dp[i][j]=dp[i-1][j-1]+1;
               }
               else{
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               }
          }
     }
     cout<<dp[i-1][j-1];

  return 0;
}
