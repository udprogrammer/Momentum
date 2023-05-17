#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  char day;
  printf("M for monday");
  printf("\nt for tuesday");
  printf("\nW for wednesday");
  printf("\nT for thursday");
  printf("\nF for friday");
  printf("\ns for saturday");
  printf("\nS for sunday");
  printf("\nEnter number of day = ");
  scanf("%c",&day);

  switch(day)
  {
     case 'm':
       printf("Monday");
       break;

     case 't':
       printf("Tuesday");
       break;

     case 'w':
       printf("Wednesday");
       break;

     case 'T':
       printf("Thursday");
       break;

     case 'f':
       printf("Friday");
       break;

     case 's':
       printf("Saturday");
       break;

     case 'S':
       printf("Sunday");
       break;

     default:
       printf("Please enter proper day !");

   }

  getch();
}
