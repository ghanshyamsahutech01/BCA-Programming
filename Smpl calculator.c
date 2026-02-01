#include <stdio.h>

main(){
char op;
float a, b, r;
printf("Enter Operator = ");
scanf("%c",&op);
printf("Enter two number = ");
scanf("%f%f",&a,&b);
switch(op){
case '+': r=a+b;
printf("%f + %f = %f",a,b,r);
break;
case '-': r=a-b;
printf("%f - %f = %f",a,b,r);
break;
case '*': r=a*b;
printf("%f * %f = %f",a,b,r);
break;
case '/': if(b!=0){
r=a/b;
printf("%f / %f = %f",a,b,r);
}
else
printf("Division by zero is not possible.");
break;
default : printf("Invalid Operator");
}
}