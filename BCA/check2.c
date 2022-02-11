/*
 * =====================================================================================
 *
 *       Filename:  p2.c
 *
 *   Description: Program to print 1 2 3 4 repeatedly for 4 times 
 *
 *        Version:  1.0
 *        Created:  12/ 9/2021  8:36:13 PM
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
    // In while loop 3 is also included So, when value
    // of i will be 3 still 1 will be added
    while(i<=3){ 
        i += 1;
        for(j=1; j<=5; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}
