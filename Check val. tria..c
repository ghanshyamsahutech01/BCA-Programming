#include <stdio.h>

main(){
int a, b, c;
printf("Enter three sides lengths of triangle = ");
scanf("%d%d%d",&a,&b,&c);
if(a<=0 || b<=0 || c<=0)
printf("Invalid lengths of sides");
else
if(a+b>c && b+c>a && c+a>b)
printf("The given sides form a valid triangle.");
else
printf("The given sides do not form a valid triangle.");
}