/*
 * =====================================================================================
 *
 *       Filename:  all-even.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/ 9/2021  5:37:20 PM
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
    int n = 0;
    while (n<=100){
        n += 1;
        if (n%2==0){
        printf("%d \n", n);
    }
} }
