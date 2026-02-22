#include <stdio.h>
#include <conio.h>
main(){
int n1, n2, n3, n4;
clrscr();
printf("Enter any four numbers = ");
scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
if(n1<=n2){
 if(n1<=n3){
  if(n1<=n4)
   printf("%d is minimum number",n1);
  else
   printf("%d is minimum number",n4);
 }
 else{
  if(n3<=n4)
   printf("%d is minimum number",n3);
  else
   printf("%d is minimum number",n4);
 }
}
else{
 if(n2<=n3){
  if(n2<=n4)
   printf("%d is minimum number",n2);
  else
   printf("%d is minimum number",n4);
 }
 else{
  if(n3<=n4)
   printf("%d is minimum number",n3);
  else
   printf("%d is minimum number",n4);
 }
}
}
