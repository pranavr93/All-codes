#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void swap(char *s,int i,int j){
    char ch;
    ch=s[i];
    s[i]=s[j];
    s[j]=ch;
}
void permute(char *s,int i,int n){
   int j;
    if(i==n){
       printf("%s\n",s);
    }
    else{
        for(j=i;j<=n;j++){
             swap(s,i,j);
             permute(s,i+1,n);
             swap(s,i,j);
        }
    }
}


int main(){
    char s[100];
    int n;
    cin>>s;
    n=strlen(s)-1;
    permute(s,0,n);
return 0;
}
