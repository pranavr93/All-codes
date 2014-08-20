#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,i,j,flag=0,count=0,x[1010],y[1010],r[1010],temp;
scanf("%d%d%d%d",&a,&b,&c,&d);
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d",&x[i]);
	scanf("%d",&y[i]);
	scanf("%d",&d[i]);
	}

if(b>d){}
if(d>b){temp=b;b=d;d=temp;}


for(i=a;i<=c;i++)	//(i,b)
	{flag=0;
	for(j=0;j<n;j++)	
		{
		if( pow(i-x[j],2) +  pow( b-y[j],2)<= pow(r[j],2) )
			{
			flag=1;break;
			}
		}
	if(flag==0){count++;}	


	}
for(i=d;i<=b-1;i++)	// (c,i)
	{flag=0;
	for(j=0;j<n;j++)	
		{
		if( pow(c-x[j],2) +  pow( i-y[j],2)<= pow(r[j],2) )
			{
			flag=1;break;
			}
		}if(flag==0){count++;}

	}
for(i=d+1;i<=b-1;i++)	//(a,i)
	{flag=0;
	for(j=0;j<n;j++)	
		{
		if( pow(a-x[j],2) +  pow( i-y[j],2)<= pow(r[j],2) )
			{
			flag=1;break;
			}
		}if(flag==0){count++;}	

	}


for(i=a+1;i<=c-1;i++)   //(i,d)
	{flag=0;
	for(j=0;j<n;j++)	
		{
		if( pow(i-x[j],2) +  pow( d-y[j],2)<= pow(r[j],2) )
			{
			flag=1;break;
			}
		}if(flag==0){count++;}

	}
printf("%d",count);
return 0;
}