#include<stdio.h>
int min(int x,int y,int z)
{
int i,min;
min=x;
if(y<min){min=y;}
if(z<min){min=z;}
return min;
}


int main()
{
int n, k, l, c, d, p, nl, np;
scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
printf("%d",min((k*l)/nl),c*d,p/np));
return 0;
}