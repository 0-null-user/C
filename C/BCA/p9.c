/*
 * =====================================================================================
 *
 *       Filename:  p8.c
 *
 *    Description: To print mirror of right triangle. 
 *
 *        Version:  1.0
 *        Created:  12/20/2021  4:38:54 PM
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

    for(i=1; i<=5; i++){
        for(j=4; j>=i; j--){
            printf(" ");
        }
        for(n=1; n<=i; n++){
            printf("*");
        }
        printf("\n");
    }
}
