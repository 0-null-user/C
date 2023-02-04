#include <stdio.h>
#include <math.h>

// program to calculate bmi
int main(void){
	float w, h, bmi;
	printf("Enter your weight in Kilograms: ");
    // use & symbol to save value of float
	scanf("%f", &w);
	printf("Enter your height in Meters: ");
	scanf("%f", &h);
    bmi = w/pow(h,2);
	printf("Your BMI is %f \n", bmi);

    if (bmi < 18.5){
        printf("You are underweight. ");
    }

    else if (bmi >= 18.5 && bmi <= 24.9){
        printf("You are healthy. ");
    }
    else{
        printf("You are overweight. ");
    }

    return 0;
}
