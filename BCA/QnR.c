/*
 * =====================================================================================
 *
 *       Filename:  QnR.c
 *
 *    Description: To know questient and remainder. 
 *
 *        Version:  1.0
 *        Created:  02/02/2022 11:58:10 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    // Computes Quotient
	quotient = dividend / divisor;
    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}  
