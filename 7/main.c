#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[10];
    printf("enter the date :");
    gets(x);
    char a[3][4];
    int z=0,c=0;
    for(int i=0;i<strlen(x);i++){
        if(x[i] == 47){
            z++;
            c=0;
        }
        else{
            a[z][c];
            c++;
        }
    }
    printf("%d",a[0][0]);
    return 0;
}
