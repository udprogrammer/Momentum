#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c,d;

  clrscr();

  printf("Enter value A = ");
  scanf("%d",&a);
  printf("Enter value B = ");
  scanf("%d",&b);
  printf("Enter value C = ");
  scanf("%d",&c);
  printf("Enter value D = ");
  scanf("%d",&d);

  if(a>b){
     if(a>c){
	if(a>d){
	     printf("A is maximum");
	   }
	   else{
	     printf("D is maximum");
	   }
	   }else{
	     if(c>d){
	       printf("C is maximum");
	     }else{
	       printf("D is maximum");
	     }
	   }

       }
   else{
     if(b>c){
	if(b>d){
	   printf("B is maximum");
	   }
	   else{
	    printf("D is maximum");
	   }
	   }else{
	     if(c>d){
	       printf("C is maximum");
	     }else{
	       printf("D is maximum");
	     }
	   }

       }




  getch();
}