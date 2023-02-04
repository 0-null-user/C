#include <stdio.h>

int main(void){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    switch(a%2){
        case 0:
            printf("The number you typed is Even! \n");
            break;
        case 1:
            printf("The number you typed is Odd\n");
            break;
        default:
            printf("neither odd nor even\n");
    }
}

