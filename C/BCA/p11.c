/*
 * =====================================================================================
 *
 *       Filename:  p10.c
 *
 *    Description: Program to print pattern kind of X. 
 *
 *        Version:  1.0
 *        Created:  12/20/2021  5:40:56 PM
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
    int i, j, k, n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(k=n; k>i; k--){
            printf("* ");
       }
        printf("\n");
        }
    for(i=1; i<=n; i++){
        for(j=n-1; j>=i; j--){
            printf(" ");
         }
         for(k=1; k<=i; k++){
             printf("* ");
         }
         printf("\n");
    }
}