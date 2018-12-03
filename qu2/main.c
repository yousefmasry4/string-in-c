#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cp(char s1[]){
    int n=0;
    puts(s1);
    for(int i=0;i<10;i++){
        if(s1[i] == 0)
            return n;
        n++;
    }
}

int main()
{
    char s1[50];
    gets(s1);
    int n=cp(s1);
    printf("%d",n);
    return 0;
}

