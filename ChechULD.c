#include <stdio.h>
#include <conio.h>
main(){
char a;
printf("Enter any character = ");
scanf("%c",&a);
if(a>='A' && a<='Z')
printf("The entered character is an Uppercase Letter");
else
if(a>='a' && a<='z')
printf("The entered character is a Lowercase Letter");
else
if(a>='0' && a<='9')
printf("The entered character is a Digit");
else
printf("The entered character is a Special character");
}