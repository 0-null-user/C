/*
 * =====================================================================================
 *
 *       Filename:  p1.c
 *
 *    Description: Program to print 1 2 3 4 5 for 4 times 
 *
 *        Version:  1.0
 *        Created:  12/ 9/2021  8:19:10 PM
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
    while(i<=3){
        i+=1;
        for(j=1; j<=5; j+=1){
            printf("%d ",j);
        }
        printf("\n");
    }
}
