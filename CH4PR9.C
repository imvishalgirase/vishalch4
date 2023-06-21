#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  float b,h,area;
  printf("enter the value of breath =");
  scanf("%f",&b);
  printf("enter the value of height=");
  scanf("%f",&h);
  area=b*h*.5;
  printf("area of triangle=%f",area);
  getch();
  }