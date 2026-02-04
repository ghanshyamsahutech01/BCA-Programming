#include <stdio.h>

main(){
char a;
printf("Enter any Character = ");
scanf(" %c",&a);
    if (a>='A' && a<='Z')
    switch(a){
    case 'A':
    case 'E': 
    case 'I': 
    case 'O':
    case 'U': printf("Character is Vowels");
    break;
    default : printf("Character is Consonant");
    }
    else
    if (a>='a' && a<='z')
    switch(a){
    case 'a':
    case 'e': 
    case 'i': 
    case 'o':
    case 'u': printf("Character is Vowels");
    break;
    default : printf("Character is Consonant");
    }
    else
    printf("Invalid Input");
}    
    