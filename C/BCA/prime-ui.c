/*
 * =====================================================================================
 *
 *       Filename:  prime.c
 *
 *    Description: Program to identify prime numbers. 
 *
 *        Version:  1.0
 *        Created:  12/13/2021  6:10:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (harsh), harsh-yadav@tutanota.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void){
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
        for(b=2; b<=a; b++){
            if(a%b==0){
                break;
            }
        }
        if (a==b){
            printf("%d is a prime number \n", a);
        }
        else{
            printf("Not a Prime Number \n");
        }
}
