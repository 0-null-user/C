/*
 * =====================================================================================
 *
 *       Filename:  fact.c
 *
 *    Description: To calculate Factorial of a number 
 *
 *        Version:  1.0
 *        Created:  12/13/2021  7:25:02 AM
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
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    f = 1;
    while(n>=1){
        f=f*n;
        n=n-1;
    }
    printf("%d is the factorial of this number \n", f);
}


