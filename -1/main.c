#include <stdio.h>

struct birthday
{
 int day;
 int month;
int year;


}Date;
 int main (){
  char *ps;
  printf("Enter your Birthday \n");
  scanf("%d/%d/%d",& Date.day,&Date.month,&Date.year);
  printf(" your Birthday BEFORE :%d / %d  /%d ",Date.day,Date.month,Date.year);


  switch (Date.month)
 {  case 1:
    ps="January";
     break;
  case 2:
    ps="Febrary";
     break;
 case 5:
    ps="Mai";
     break;
 case 6:
    ps="June";
     break;
case 7:
    ps="July";
     break;
case 8:
    ps="Aug";
     break;
case 9:
    ps="sept";
     break;
case 10:
    ps="october";
     break;
case 11:
    ps="November";
     break;
case 12:
    ps="December";
     break;
 default :
  printf("error");
 break;

}

printf("your Bithday After: %s / %d /%d",ps,Date.day,Date.year);
}

