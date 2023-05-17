#include<stdio.h>
#include<conio.h>
main()
{
  int unit,el_bill,sur,total;
  clrscr();
  printf("Enter unit = ");
  scanf("%d",&unit);
  if(unit<=50){
    el_bill = unit*0.50;

  }
    else if(unit<=150){

    el_bill = (unit-50)*0.75+25;

  }

   else if(unit<=250){

    el_bill= (unit-150)*1.20+100;//25+75

  }  else{

   el_bill = (unit-250)*1.5+220;//25+75+120

  }

  sur = el_bill*0.2;
  total= el_bill+sur;
  printf("Electicity Bill = %d",total);


  getch();
}