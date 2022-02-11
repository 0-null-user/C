#include <stdio.h>

int main(void){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a%2==0){
        printf(" The number you typed is Even\n");
    }
    else{
        printf(" The number you typed is Odd");
    }
}

