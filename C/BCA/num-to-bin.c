/*
 * =====================================================================================
 *
 *       Filename:  num-to-bin.c
 *
 *    Description: Program to convert a number into binary. 
 *
 *        Version:  1.0
 *        Created:  02/03/2022 08:34:01 PM
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
	int num, r;
	int bin[32];

	printf("Enter a number: ");
	scanf("%d", &num);

	r = 0;
	while(num>0){
		num = num/2;
		bin[r] = num%2;
		r++;
		printf("%d", bin[r]);
	}
}
