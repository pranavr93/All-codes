#include<stdio.h>
#include<math.h>
double pi = 3.1415926;
int main() {
    int n, R, r;
    scanf("%d%d%d", &n, &R, &r);
      if (n == 1)
	{
	if(R>=r){printf("YES");return 0;}
	else{printf("NO");return 0;}
	}

      else{
	if((R-r)*sin(pi/n)>=r-1e-7){printf("YES");return 0;}
	else{printf("NO");return 0;}
	}
}