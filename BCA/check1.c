/*
 * =====================================================================================
 *
 *       Filename:  p5.c
 *
 *    Description: Program to print right angle examination one 
 *
 *        Version:  1.0
 *        Created:  12/13/2021  4:59:50 PM
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

    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
