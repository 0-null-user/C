/*
 * =====================================================================================
 *
 *       Filename:  prog2.c
 *
 *    Description: To subtract two numbers without using any operator. 
 *
 *        Version:  1.0
 *        Created:  02/01/2022 11:55:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int sub(int, int);

int main(void){
	int num1, num2;
	int diff;

	printf("Enter a number: ");
	scanf("%d", &num1);

	printf("Enter another number: ");
	scanf("%d", &num2);

	diff = sub(num1, num2);
	printf("difference between two numbers: %d  \n", diff);
}

int sub(int num1, int num2){
	while(num2 != 0){
		int tmp = (~num1) & num2;
		num1 = num1 ^ num2;
		num2 = tmp << 1;
  }
	return num1;
}
