/*
 * =====================================================================================
 *
 *       Filename:  prog1.c
 *
 *    Description: Program to find difference between two numbers 
 *                 without Using "-" operator
 *
 *        Version:  1.0
 *        Created:  02/01/2022 09:45:48 AM
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
	int num1, num2;
	int diff;
	printf("Enter a number: ");
	scanf("%d", &num1);

	printf("Enter another number: ");
	scanf("%d", &num2);
    
	diff = num1+~num2+1;
	printf("The difference between two numbers is: %d \n", diff);
}