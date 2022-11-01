#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int p,r,t;
 float si;
 printf("enter principle");
 scanf("%d",&p);
 printf("enter rate");
 scanf("%d",&r);
 printf("enter time");
 scanf("%d",&t);
 si=(p*r*t)/100;
 printf("SIMPLE INTREST IS %f",si);
 getch();

}