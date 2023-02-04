/*
 * =====================================================================================
 *
 *       Filename:  prog3.c
 *
 *    Description:  Program to demonstarte scanf_s function...
 *
 *        Version:  1.0
 *        Created:  06/26/2022 10:31:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Harsh Yadav (mn), harsh-yadav@tutanota.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define MAX_LENGTH 21
    int
main ( int argc, char *argv[] )
{
    char word1[MAX_LENGTH];
    printf("Type in the first word (maximum %d characters): ", MAX_LENGTH -1 );
    scanf_s("%s", word1, sizeof(word1));
    return 0;
}				/* ----------  end of function main  ---------- */
