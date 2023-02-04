/*
 * =====================================================================================
 *
 *       Filename:  Dec-To-Binary.c
 *
 *    Description:  Program to convert Decimal value to Binary. 
 *
 *        Version:  1.0
 *        Created:  02/02/2022 09:24:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void){
	int num, r, i;
	int bin[10];
	printf("Enter a number: ");
    scanf("%d",&num);
	r = 0;
	while(num>0){
        bin[r] = num%2;
        num = num/2;
		r++;
	}
    for(i=r-1; i>=0; i--){
		printf("%d", bin[i]);
  	}
	printf("\n");
}
