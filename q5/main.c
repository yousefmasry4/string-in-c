#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *swap(char *x,char *y){
    char temp=*y;
    *y=*x;
    *x=temp;
}

void process(char x[],int start,int end){
   int len=end-start,with=len/2;
   for(int i=0;i<with;i++){
       swap(&x[start],&x[end]);
       start++;end--;
       if(start == end){
           break;
       }
   }

}

void jogo(char c[]){
    int start=0,bb=strlen(c);
    for(int i=0;i<bb;i++){
        if(c[i]==32){
            process(c,start,i-1);
            start=i+1;
        }
    }
}

void cp(char s1[],char c[]){
    int zz=strlen(s1);
    int x=0;
    for(int i=zz-1;i>=0;--i){
        c[x]=s1[i];
        x++;
    }
  //  puts(c);
    c[strlen(c)]=32;c[strlen(c)+1]='\0';
}

int main()
{
    char s1[40],c[40];
    gets(s1);
    cp(s1,c);
    jogo(c);
    puts(c);
    return 0;
}

