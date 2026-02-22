#include <stdio.h>
#include <conio.h>
upper(char *ptr){
int a;
int i=0;
while(*(ptr+i)){
    a=*(ptr+i);
    if(a>='a' && a<='z')
    *(ptr+i) = *(ptr+i)-32;
    i++;
    }
}
lower(char *ptr){
int a;
int i=0;
while(*(ptr+i)){
    a=*(ptr+i);
    if(a>='A' && a<='Z')
    *(ptr+i) = *(ptr+i)+32;
    i++;
    }
}    

main(){
char s[30];
char *ptr=s;
char Choice;
clrscr();
printf("Enter name = ");
scanf("%s",s);
printf("Enter one Choice a,b = ");
scanf(" %c",&Choice);
switch(Choice){
case 'a': upper(s);
    printf("Capital form = %s",s);
    break;
case 'b': lower(s);
    printf("Small form = %s",s);
    break;
default : printf("Please enter valide Choice a/b");
}
}