#include <stdio.h>
#include <stdlib.h>

int cp(char s1[50],char s2[],int n){
    for(int i=0;i<n;i++){
        if(s1[i] ==0){
            break;
        }
        else{
            s2[i]=s1[i];
        }
    }
}

int main()
{
    char s1[50],s2[50];
    gets(s1);
    int n;
    scanf("%d",&n);
    cp(s1,s2,n);
    puts(s2);
    return 0;
}
