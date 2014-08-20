#include<stdio.h>

struct fact
{
 long long val[10000];
 int till;
 int zero;
};

typedef struct fact Fact;

Fact input[10000];

int main()
{
 long long temp=0,i,j,pro=0;
 int va;
 input[0].val[0]=1;
 input[0].till=1;
 for(i=1;i<1010;i++)
 {
  for(j=0;j<input[i-1].till;j++)
  {
   pro=(input[i-1].val[j]*(i+1))+temp;
   if(pro>=10)
   {
    input[i].val[j]=(pro%10);
    temp=pro/10;
    input[i].till=(j+1);
   }
   else
   {
    input[i].val[j]=pro;
    input[i].till=(j+1);
    temp=0;
   }
  }
  if(temp>0)
  {
   while(temp>0)
   {
    input[i].val[j]=temp%10;
    temp=temp/10;
    j++;
    input[i].till=j;
   }
  }
  temp=0;
 }
 scanf("%d",&va);
 for(j=input[va-1].till-1;j>=0;j--)
 {
  printf("%lld",input[va-1].val[j]);
 }
 return 0;
}