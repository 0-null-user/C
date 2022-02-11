/*
 * =====================================================================================
 *
 *       Filename:  p5.c
 *
 *    Description: Program to print K like pattern.
 *
 *        Version:  1.0
 *        Created:  12/13/2021  5:56:07 PM
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
    int i, j, m, n;
    for(i=1; i<=5; i++){
       for(j=5; j>=i; j--){
           printf("* ");
       }
       printf("\n");
   }
    for(m=1; m<=5; m++){
        for(n=1; n<=m; n++){
            printf("* ");
        }
        printf("\n");
    }

}
