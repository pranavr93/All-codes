#include<stdio.h>

char *strcpy(const char *source){
    int i;
    char *destination;
    destination=(char*)malloc(sizeof(strlen(source)));
     for(i=0;i<strlen(source);i++){
        destination[i]=source[i];
     }
     destination[i]='\0';
     return destination;
}
int main(){
    char s[100];

   // char *copy;
    char *copy=strcpy(s);
     scanf("%s",s);
    printf("%s\n\n",copy);
}



