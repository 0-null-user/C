/*
 * =====================================================================================
 *
 *       Filename:  pattern.c
 *
 *    Description:  Let's make a random pattern.... 
 *
 *        Version:  1.0
 *        Created:  05/13/2022 04:24:16 PM
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
    for(int i=0; i<=10; i++){
        printf("\n");
        for(int k=10-1; k>=i; k--){
            printf(" ");
        }
        for(int j=0; j<=10; j++){
            printf("* ");
        }
    }
    return 0;
}				/* ----------  end of function main  ---------- */
