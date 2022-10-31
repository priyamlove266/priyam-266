#include<stdio.h>
#include<conio.h>
void main()
{
float f,c;
clrscr();
printf("enter tempratuare in fahrenite");
scanf("%f",&f);
c=(f-32)*5/9;
printf("tempratuare in centigrade is%f",c);
getch();
}