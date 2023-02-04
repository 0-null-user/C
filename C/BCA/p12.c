/* 
 *  Description: Program to print diamond.    
 *  Created:  12/20/2021  5:40:56 PM
 *  Author:  Harsh Yadav, harsh-yadav@tutanota.com
 */

#include <stdio.h>
#include <time.h>

int main(void){
    int i, j, k;
    double time_spent = 0.0;
    clock_t begin = clock();
    for(i=1; i<=10; i++){
        for(j=10-1; j>=i; j--){
            printf(" ");
         }
         for(k=1; k<=i; k++){
             printf("* ");
         }
         printf("\n");
    }
    for(i=0; i<10; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }

	for(k=10; k>i; k--){
            printf("* ");
        }
        printf("\n");
	}
       clock_t end = clock();
       time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
       printf("\n The execution time is %lf seconds \n", time_spent);
}  
