//Does an xor on the two variables
#include<iostream>
using namespace std;
int main(){
     int x=5,y=7;
     x^=y^=x^=y;
     cout<<x;
     cout<<endl<<y;
     return 0;
 }
