#include<stdio.h>
#include<conio.h>
main()
{
   clrscr();
   float p,r,t,si;
   printf("enter the value of p=");
   scanf("%f",&p);
   printf("enter the value of r=");
   scanf("%f",&r);
   printf("enter the value of t=");
   scanf("%f",&t);
   si=p*r*t/100;
   printf("si is =%f",si);
   getch();
   }