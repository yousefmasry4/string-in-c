#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a(char arr[]){
    int len=strlen(arr),c=0;
    for(int i=0;i<len;i++){
        if(arr[i]>=65 && arr[i]<=255)
            c++;
    }
    if(c>=6){
        return 1;
    }
    return 0;
}


int ba(char arr[]){
    int len=strlen(arr),c=0;
    for(int i=0;i<len;i++){
        if(arr[i]>=65 && arr[i]<=90)
            c++;
    }
    if(c>=1){
        return 1;
    }
    return 0;
}


int bb(char arr[]){
    int len=strlen(arr),c=0;
    for(int i=0;i<len;i++){
        if(arr[i]>=97 && arr[i]<=122)
            c++;
    }
    if(c>=1){
        return 1;
    }
    return 0;
}

int c(char arr[]){
    int len=strlen(arr),c=0;
    for(int i=0;i<len;i++){
        if(arr[i]>=48 && arr[i]<=57)
            c++;
    }
    if(c>=1){
        return 1;
    }
    return 0;
}


int main()
{
    printf("Hello fiend!\n");
    printf("enter usr:");
    char usr[20];
    gets(usr);
    start:
    printf("enter strong pass ");
    char d[90];
    gets(d);
    if(bb(d)+a(d)+ba(d)+c(d) != 4){
        printf(":( \n ");
        goto start;
    }
    system("clear"); //for linux or  cls for wind :p
    puts(usr);
    puts(d);
    return 0;
}
