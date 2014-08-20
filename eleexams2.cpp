/* Author : Pranav
BITS PILANI Hyderabad Campus */
// Cool Guys
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

vector<long long> v;
vector<long long> p;
int main(){
     double sum=0,prod;
     long long hash[100]={0};
     ll t,i,n,j,a[100]={100},b[100]={0},prob[100]={0},k;
     cin>>t;
     while(t--){
          cin>>n;
          if(n>16){cout<<"0.000000\n";continue;}
              fr(i,n){
                    cin>>prob[i];
                    cin>>a[i];
                    cin>>b[i];

              }

          for(i=0;i<pow(2,n);i++){   // 0 to 65536
              for(k=0;k<60;k++){hash[k]=0;}

               for(j=n-1;j>=0;j--){
                    if(i&(1<<j)){
                  //  cout<<1;
                         v.pb(b[n-j-1]);
                   //      cout<<b[n-j-1]<<" ";
                         p.pb(100-prob[n-j-1]);
                    }
                    else{
                 //   cout<<0;
                      v.pb(a[n-j-1]);
                  //    cout<<a[n-j-1]<<" ";
                      p.pb(prob[n-j-1]);
                    }
                }
                    prod=1;
                    for(k=0;k<n;k++){
                    cout<<v[k]<<" ";
                    //     if(hash[v[k]]!=0){
                    //     break;
                    //     }
                    //     else{
                    //     hash[v[k]]++;
                    //     prod*=(p[k]/100.0);
                    //     }
                    }
                       v.clear();
                       p.clear();
                    if(k!=n){continue;}
                    else{sum+=prod;}


               }



               /* for(k=0;k<n;k++){cout<<v[i]<<" ";}
                    cout<<endl;
                    for(k=0;k<n;k++){cout<<p[i]<<" ";}
                    cout<<endl;  */
            cout<<endl;
          }
          //cout<<sum<<endl;
     }

return 0;
}
