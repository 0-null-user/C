/* 
 * =====================================================================================
 *
 *       Filename:  pattern.c
 *
 *    Description:  A random pattern to print rhombus 
 *
 *        Version:  1.0
 *        Created:  03/02/2022 09:50:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>

	int
main ( int argc, char *argv[] )
{
	int i, j, k;
	for(i=0; i<=20; i++){
		for(j=20-1; j>=i; j--){
			printf(" ");
		}
	    for(k=1; k<=20; k++){
			printf("* ");
		} 
		printf("\n");
	}
	return 0;
}  				/* ----------  end of function main  ---------- */
