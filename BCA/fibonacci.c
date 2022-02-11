/*
 * =====================================================================================
 *
 *       Filename:  fibonnaci.c
 *
 *    Description: Program to print fibonacci series 
 *
 *        Version:  1.0
 *        Created:  12/13/2021  7:41:44 AM
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
    int n, a, b, i, c;
    a=-1;
    b=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}  
