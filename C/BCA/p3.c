/*
 * =====================================================================================
 *
 *       Filename:  p3.c
 *
 *    Description: Program to print j times i. 
 *
 *        Version:  1.0
 *        Created:  12/ 9/2021  8:57:24 PM
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
    int i, j;
    i = 0;
    while(i<=4){
        i += 1;
        for(j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}


