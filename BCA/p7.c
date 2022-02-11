/*
 * =====================================================================================
 *
 *       Filename:  p7.c
 *
 *    Description: Program to print mirror of 
 *                 right triangle 
 *
 *        Version:  1.0
 *        Created:  12/20/2021  3:15:56 PM
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
    int i,j,n;

    for(i=0; i<5; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(n=5; n>i; n--){
            printf("*");
        }
        printf("\n");
    }
}
