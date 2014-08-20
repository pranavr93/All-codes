#include<stdio.h>
int main()
{
int vp,vd,t,f,c,time=0,k,count=0;
scanf("%d%d%d%d%d",&vp,&vd,&t,&f,&c);
k=c;
if(vp>vd){printf("0");return 0;}

c-=(vp*(t+ (vp*t/(vd-vp)) ));
time=(t+ (vp*t/(vd-vp)) );
count++;
if(c<0){printf("0");return 0;}

while(c>0)
	{
time+=( (k-c)/vd+f);
c=k-vp*time;
time+=( (k-c)/vd );
c=k-vp*time;
	count++;
	}

printf("%d",count-1);
return 0;
}

k=0;
m=0;
a[1000];
for(i=0;i<=c/vp;i++)
	{
	a[k]=0;
	k+=vp;
	a[k]++;
	if(t==1){continue;}
	a[m]=0
	m+=vd;
	a[m]++;




