#include<stdio.h>
int main(){
    char char1= 'A';

    switch(char1){
        case 'A':
        printf("Character is A\n");
        break;
        case 'B':
        printf("Character is B\n");
        break;
        case 'C':
        printf("Character is C\n");
        break;
        default:
        printf("Character is not A,B or C\n");
    }
    return 0;
}