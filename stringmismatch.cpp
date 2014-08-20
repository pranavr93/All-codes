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
int a[2000][2000];
int main()
{
     vector<int> dp1;
     vector<int> dp2;
     int max=-1,i,j,one,zero,k,t,val,index;
     string s1;
     string s2;
     cin>>t;
     while(t--){
         max=-1;
         s1.clear();
         s2.clear();
          cin>>k;cin>>s1>>s2;
          for(i=0;i<s1.size();i++){
               for(j=0;j<s2.size();j++){
                    if(s1[i]==s2[j]){
                         a[i+1][j+1]=1;
                    }
                    else{
                         a[i+1][j+1]=0;
                    }
               }
          }
          dp1.clear();
          dp2.clear();
          one=0;zero=0;

         /*
           for(i=1;i<=s1.size();i++){
              for(j=1;j<=s2.size();j++){
                    cout<<a[i][j]<<" ";
              }
             cout<<endl;
          }
         */
          for(i=1;i<=s2.size()-k+1;i++){
          one=0;zero=0;dp1.clear();dp2.clear();
               for(j=1;j<=s1.size();j++){
               if(i+j-1>s2.size()){break;}
                    if(a[j][i+j-1]==0){
                         zero++;
                         dp1.pb(zero);
                         dp2.pb(one);

                    }
                    else{
                         one++;
                         dp1.pb(zero);
                         dp2.pb(one);
                    }
               }
               for(j=0;j<dp1.size();j++){
                    val=dp1[j]-k;
                    if(val==0){
                         if(k+dp2[j]>max){max=k+dp2[j];continue;}
                    }

                    index=lower_bound(all(dp1),val)-dp1.begin();
                    if(dp1.end()-dp1.begin()==dp1.size()+1){cout<"yoo\n";}
                    if(index!=dp1.size()){
                         if(k+dp2[j]-dp2[index]>max){max=k+dp2[j]-dp2[index];}
                    }
               }
               //cout<<max<<endl;
          }
          for(i=2;i<=s1.size();i++){
               dp1.clear();dp2.clear();
          one=0;zero=0;
               for(j=1;j<=s2.size();j++){
               if(i+j-1>s2.size()){break;}
                    if(a[i+j-1][j]==0){
                         zero++;
                         dp1.pb(zero);
                         dp2.pb(one);

                    }
                    else{
                         one++;
                         dp1.pb(zero);
                         dp2.pb(one);
                    }
               }
               for(j=0;j<dp1.size();j++){
                    val=dp1[j]-k;
                    if(val==0){
                         if(k+dp2[j]>max){max=k+dp2[j];continue;}
                    }

                    index=lower_bound(all(dp1),val)-dp1.begin();
                    if(index!=dp1.size()){
                         if(k+dp2[j]-dp2[index]>max){max=k+dp2[j]-dp2[index];}
                    }
               }
               //cout<<max<<endl;
          }
          cout<<max<<endl;
          //cout<<dp1.size();
     }


  return 0;
}
