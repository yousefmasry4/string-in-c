#include <stdio.h>
#include <stdlib.h>

int cp(char s1[]){
    int n=0;
    for(int i=0;i<50;i++){
        if(s1[i] != '\0'){
            n++;
        }
    }
    printf("%d",n);
return n;
}

int main()
{
    char s1[50];
    gets(s1);
    int n=cp(s1);
    printf("%d",n);
    return 0;
}

