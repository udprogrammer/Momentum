#include<stdio.h>
#include<conio.h>
main()

{
  char character;
  clrscr();
  printf("Enter character value = ");
  scanf("%c",&character);

   if (character>='a'&& character<='z'||character>='A'&& character<='Z'){
	  printf("alphabet");
      }else if(character >= '0' && character <= '9'){
	  printf("Digit");
      }else{
	 printf("Special character");
      }

  getch();

}