#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
long long op(long long a,long long b,char ch)
{
     if(ch=='*'){return a*b;}
     else {return a+b;}
}

int main(){
     long long n,i,v[4],min,b,c,d,val,t,a;
     char s1,s2,s3;

     cin>>t;
     while(t--){
      min=100000000000000;
     // cout<<min;
     cin>>v[0]>>v[1]>>v[2]>>v[3];
         cin>>s1>>s2>>s3;
     sort(v,v+4);


     do{
     a=v[0];
     b=v[1];
     c=v[2];
     d=v[3];
     val=op(op(a,b,s1),op(c,d,s2),s3);
     if(val<min){min=val;}

     val=op(op(a,c,s1),op(b,d,s2),s3);
     if(val<min){min=val;}

      val=op(op(a,d,s1),op(b,c,s2),s3);
     if(val<min){min=val;}
     //(a +b)+(c+d )
     val=op(op(op(a,b,s1),c,s2),d,s3) ;
     if(val<min){min=val;}
        val=op(op(op(a,b,s1),d,s2),c,s3) ;
     if(val<min){min=val;}

      val=op(op(op(a,c,s1),b,s2),d,s3) ;
     if(val<min){min=val;}
        val=op(op(op(a,c,s1),d,s2),b,s3) ;
     if(val<min){min=val;}

        val=op(op(op(a,d,s1),b,s2),c,s3) ;
     if(val<min){min=val;}
        val=op(op(op(a,d,s1),c,s2),b,s3) ;
     if(val<min){min=val;}
     }while(next_permutation(v,v+4));
     cout<<min<<endl;
     }
     return 0;

 }
