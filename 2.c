#include <stdio.h>
#include <stdlib.h>

int num(char s1[50]){
    int n=0;
    for(int i=0;i<n;i++){
        if(s1[i] !='\0')
            n++;
    }
return n;
}

int main()
{
    char s1[50];
    gets(s1);
    int n = num(s1);
    printf("%d",n);
    return 0;
}
