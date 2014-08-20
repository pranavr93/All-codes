#include<cstdio>
unsigned a,b,m,r,i,F[100000];
int main(){
	scanf("%d%d%d%d",&a,&b,&m,&r);F[r]=1;
	for(i=2;;++i)
		if(F[r=(r*a+b)%m])return printf("%d\n",i-F[r]),0;
		else F[r]=i;
}