#include<stdio.h>
#include<conio.h>
void main()
{
 float bs,gs,hr,da;
 clrscr();
 printf("ramesh's basic salary is");
 scanf("%f",&bs);
 da=(bs*40)/100;
 hr=(bs*20)/100;
 gs=(bs+hr+da);
 printf("gross salary of ramesh is %f",gs);
 getch();


 }