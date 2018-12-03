#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cp(char s1[]){
    int i=strlen(s1);i--;
   // printf("%d",i);
    if(s1[i] == 'y'){
        s1[i]='i';s1[i+1]='e';s1[i+2]='s';s1[i+3]='\0';
        }
    if(s1[i] == 's' || s1[i] == 's' && s1[i+1] == 'h' || s1[i] == 'c' && s1[i+1] == 'h'){
        s1[i]='e';s1[i+1]='s';s1[i+2]='\0';
        }
    else{
    s1[i+1]='s';s1[i+2]='\0';
    }
}

int main()
{
    char s1[15];
    gets(s1);
    cp(s1);
    puts(s1);
    return 0;
}

