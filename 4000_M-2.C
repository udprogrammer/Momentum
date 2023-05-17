#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();

  int number;
  printf("Enter value number = ");
  scanf("%d",&number);

  (number%2==0) ? printf("numbe	r is even") : printf("number is odd");

  getch();

}