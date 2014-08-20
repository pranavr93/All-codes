
#include <iostream>
using namespace std;
typedef long long ll;
long long degree(long long a, long long k) {
    ll temp,cur;
   temp = 1;
   cur = a;
  while (k) {
    if (k%2) {
      temp = (temp * cur)%10;

    }
    k /= 2;
    cur = (cur * cur)%10 ;

  }
  return temp;
}
int main()
{
ll n,k,t,ct=0,m,i,j;
cin>>t;
while(t--){
    cin>>a>>b;
    cout<<degree(a,b)<<endl;
}
 return 0;
}
