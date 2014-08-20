#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
     FILE *fp,*fp2;
     long k;
     fp=fopen("prime.txt","r");
     fp2=fopen("prime2.txt","w");
     while(fscanf(fp,"%d",&k)!=EOF)
     {
          fprintf(fp2,"%d, ",k);
     }
return 0;
}

