#include <stdio.h>
#include <conio.h>
main(){
int n, b, a=0;
clrscr();
printf("Enter any number = ");
scanf("%d",&n);
while(a*a<n){
a++;
}
if(a*a==n)
printf("Perfect Square");
else
printf("Not Perfect Square");
}