#include<stdio.h>
#include<conio.h>
void main()
{
float l,b,ar,pm,r,cfc,aoc;
clrscr();
printf("enter length and breadth of rectangle");
scanf("%f""%f",&l,&b);
printf("enter radius of a circle");
scanf("%f",&r);
ar=(l*b);
pm=2*(l+b);
cfc=2*3.14*r;
aoc=3.14*r*r;
printf("area of rectangle is %f",ar);
printf("perimeter of rectangle is%f",pm);
printf("circumfrence of a circle is%f",cfc);
printf("area of circle is%f",aoc);
getch();
}