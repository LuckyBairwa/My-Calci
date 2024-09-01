// Write a program for a calculator which can perform addition,substraction, multiplication, division, modulus, root, power and square etc for the given numbers by the user.

#include <stdio.h>  // for input and output
#include <math.h>   // for mathematical operations
#include <stdlib.h> // for exit function

// creating a function for addition
int addition(int numbers, int numArray[])
{
    int result = 0;
    for (int i = 0; i < numbers; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &numArray[i]);
        result += numArray[i];
    }
    printf("\nThe result of addition is : %d ", result);
}

// creating a function for substraction
int substraction(int numbers, int numArray[])
{
    int result = 0;
    for (int i = 0; i < numbers; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &numArray[i]);
        result -= numArray[i];
    }
    printf("\nThe result of substraction is : %d ", result);
}

// creating a function for multiplication
int multiplication(int numbers, int numArray[])
{
    int result = 1;
    for (int i = 0; i < numbers; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &numArray[i]);
        result *= numArray[i];
    }
    printf("\nThe result of multiplication is : %d ", result);
}

// creating a function for division
int division(float divisor, float dividend)
{
    if (dividend == 0)
    {
        printf("\nError: Division by zero is not allowed.");
    }

    float result = dividend / divisor;
    printf("\nThe result of division is : %.2f ", result);
}

// creating a function for root
void root(float sqrNum)
{
    printf("\nThe result of root is : %.2f ", sqrt(sqrNum));
}

// creating a function for power
int power(float base, float exponent)
{
    printf("\nThe result of power is : %.1f ", pow(base, exponent));
}

// creating a function for square
int square(int numbers)
{
    int result = numbers * numbers;
    printf("\nThe result of square is : %d ", result);
}

int main()
{
    int numArray[100], divisor, dividend, operation, numbers;
    float sqrNum, base, exponent;

    printf("\n\n");
    printf("\t\t\t\tWelcome to the Lucky's Calculator\t\t\t\t");
    printf("\n\n");

    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Root\n");
    printf("6. Power\n");
    printf("7. Square\n");
    printf("8. Exit\n");
    printf("\n\n");

    while (1)
    {
        printf("\n\nSelect the operation number: ");
        scanf("%d", &operation); // taking the operation number from the user
        if (operation == 1)
        { // if the operation is addition
            printf("How many numbers do you want to perform the operation on: ");
            scanf("%d", &numbers);
            printf("\n");
            addition(numbers, numArray);
        }
        else if (operation == 2)
        { // if the operation is substraction
            printf("How many numbers do you want to perform the operation on: ");
            scanf("%d", &numbers);
            printf("\n");
            substraction(numbers, numArray);
        }
        else if (operation == 3)
        { // if the operation is multiplication
            printf("How many numbers do you want to perform the operation on: ");
            scanf("%d", &numbers);
            printf("\n");
            multiplication(numbers, numArray);
        }
        else if (operation == 4)
        { // if the operation is division
            printf("Enter the dividend: ");
            scanf("%d", &dividend);
            printf("Enter the divisor: ");
            scanf("%d", &divisor);
            division(divisor, dividend);
        }
        else if (operation == 5)
        { // if the operation is root
            printf("Enter the number whose square root you want to find: ");
            scanf("%f", &sqrNum);
            root(sqrNum);
        }
        else if (operation == 6)
        { // if the operation is power
            printf("Enter the base: ");
            scanf("%f", &base);
            printf("Enter the exponent: ");
            scanf("%f", &exponent);
            power(base, exponent);
        }
        else if (operation == 7)
        { // if the operation is square
            printf("Enter the base: ");
            scanf("%f", &base);
            square(base);
        }
        else if (operation == 8)
        { // if the operation is exit
            exit(0);
        }
        else
        {
            printf("Please enter a valid operation number");
        }
    }
}