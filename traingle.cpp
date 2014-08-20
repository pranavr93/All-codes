#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector <int> v;

int main()
{
int n,i,j,k,m,t;
cin>>n;
if (n==0){
    for(i=0;i<32;i++)
    {
       k=31-i;
       m=63-2*k;
       for(j=0;j<k;j++)
       {
        cout<<"_";
       }
       for(j=0;j<m;j++){
       cout<<"1";
       }
      for(j=0;j<k;j++)
       {
        cout<<"_";
       }
       cout<<endl;
            

    }
 }
else if(n==1){
    for(i=0;i<16;i++)
    {
       k=31-i;
       m=63-2*k;
       for(j=0;j<k;j++)
       {
        cout<<"_";
       }
       for(j=0;j<m;j++){
       cout<<"1";
       }
      for(j=0;j<k;j++)
       {
        cout<<"_";
       }
       cout<<endl;
    }
    m=-1;
    t=31;
    for(i=15;i>=0;i--)
    {
        m+=2;
        for(j=0;j<i;j++){cout<<"_";}
        for(k=0;k<m;k++){cout<<"1";}
        for(j=0;j<t;j++){cout<<"_";}
        for(k=0;k<m;k++){cout<<"1";}
        for(j=0;j<i;j++){cout<<"_";}
        t-=2;
        cout<<endl;
        
    }
    
}
else if(n==2){
          for(i=0;i<8;i++)
    {
       k=31-i;
       m=63-2*k;
       for(j=0;j<k;j++)
       {
        cout<<"_";
       }
       for(j=0;j<m;j++){
       cout<<"1";
       }
      for(j=0;j<k;j++)
       {
        cout<<"_";
       }
       cout<<endl;
    }
    m=-1;
    for(i=8;i<16;i++)
    {
        k=31-i;
        m+=2;
        for(j=0;j<k;j++){cout<<"_";}
        for(j=0;j<m;j++){cout<<"1";}
        for(j=0;j<(63-2*k-2*m);j++){cout<<"_";}
         for(j=0;j<m;j++){cout<<"1";}
         for(j=0;j<k;j++){cout<<"_";}
        cout<<endl;
    }
    m=-1;
    for(i=16;i<24;i++)
    {
        k=31-i;
        m+=2;
        for(j=0;j<k;j++){cout<<"_";}
        for(j=0;j<m;j++){cout<<"1";}
        for(j=0;j<(63-2*k-2*m);j++){cout<<"_";}
         for(j=0;j<m;j++){cout<<"1";}
         for(j=0;j<k;j++){cout<<"_";}
        cout<<endl;
    }
    m=-1;
    for(i=24;i<32;i++)
    {
        k=31-i;
        m+=2;
        for(j=0;j<k;j++){cout<<"_";}
        for(j=0;j<m;j++){cout<<"1";}
        for(j=0;j<(63-2*k-4*m)/3;j++){cout<<"_";}
         for(j=0;j<m;j++){cout<<"1";}
         for(j=0;j<k;j++){cout<<"_";}
         cout<<"_";
         for(j=0;j<k;j++){cout<<"_";}
        for(j=0;j<m;j++){cout<<"1";}
        for(j=0;j<(63-2*k-4*m)/3;j++){cout<<"_";}
         for(j=0;j<m;j++){cout<<"1";}
         for(j=0;j<k;j++){cout<<"_";}
        cout<<endl;
    }

    
    
    
    
    
    
    
 }
 else if(n==3){
  }
  else if(n==4){
   }
   else if(n==5){

    }
    

return 0;
}


