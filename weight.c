#include <stdio.h>
/**
 * main - Indicates the start of the program
 * 
 * float - Indiicates values with decimal points
 * 
 * BMI - Body Mass Index
 * 
 * return: Indicates successful execution
 */

int main()
{
    float height,weight,BMI;
    

    printf("WELCOME TO AFYA CARE\n");
    printf("Enter your weight(kgs): ");
    scanf("%f" ,&weight);

    printf("Enter your height(ft): ");
    scanf("%f", &height);

    /*Actal formula to get the BMI of a person*/
    BMI = weight * 703 / (height * height);

    if (BMI < 18.5)
    {
        printf("You are Under-weight\n", BMI );
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("You have Normal weight\n", BMI);
    }
    else if (BMI >= 25 && BMI <= 29.9)
    {
        printf("You are Overweight\n", BMI);
    }
    else
    {
        printf("You have Obesity\n", BMI);
    }
    printf("            THANK YOU FOR USING AFYA CARE.\n");

    return (0);
}