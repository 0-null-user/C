/*
 * =====================================================================================
 *
 *       Filename:  p6.c
 *
 *    Description: Program to print j times i 
 *
 *        Version:  1.0
 *        Created:  12/13/2021  5:04:43 PM
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
    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

