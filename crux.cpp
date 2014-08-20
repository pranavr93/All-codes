#include<stdio.h>
#include<stdlib.h>

int main( ) {
int n;
n = 1000;
FILE *fp;
char str[3][100];

scanf("%[^\n]s",str[0]);

scanf("\n%[^\n]s",str[1]);
scanf("\n%[^\n]s",str[2]);
fp = fopen("sampleinput.txt","w+");

while(n--) {
printf("Here");
fprintf ( fp,"%s",str[rand()%3] );

fprintf(fp," %c%c%c%c%c%c%c%c%c%c%c%c",   '2','0','1',rand()%10+'0','A',rand()%9+'0',rand()%10+'0',rand()%10+'0',rand()%10+'0','H');
fprintf(fp,"\n");
}//n
fclose(fp);
return 0;
}

