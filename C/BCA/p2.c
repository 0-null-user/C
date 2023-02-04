/* 
 *  Description: Program to print kite kind of pattern.    
 *  Created:  12/20/2021  5:40:56 PM
 *  Author:  Harsh Yadav, harsh-yadav@tutanota.com
 */

#include <stdio.h>

int main(void){
    int i, j, k;
    for(i=1; i<=12; i++){
        for(j=12-1; j>=i; j--){
            printf(" ");
         }
         for(k=1; k<=i; k++){
             printf("* ");
         }
         printf("\n");
     }
}	
