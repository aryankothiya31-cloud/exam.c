#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;

    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    
    switch (operator)
    {
    case '+':
        printf("Result: %.2lf", num1 + num2);
        break;

    case '-':
        printf("Result: %.2lf", num1 - num2);
        break;

    case '*':
        printf("Result: %.2lf", num1 * num2);
        break;

    case '/':
        if (num2 != 0)
            printf("Result: %.2lf", num1 / num2);
        else
            printf("Error! Division by zero.");
        break;

    default:
        printf("Invalid operator!");
    }

    return 0;
}

// que 2//

#include <stdio.h>

int sumArray(int arr[],int n)
{
    int sum =0;
    for (int i=0; i<n;i++)
        sum+=arr[i];
    return sum;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of array :%d",sumArray(arr,n));

    return 0;
}

// que 3//

#include <stdio.h>

void processArray(int arr[], int n)
{
    int sum = 0;

    printf("Reversed array:");
    for (int i =n-1;i >= 0; i--)
    {
        printf("%d ",arr[i]);
        sum +=arr[i];
    }

    printf("\nSum: %d",sum);
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);

    processArray(arr, n);

    return 0;
}

// que 4//

#include <stdio.h>

void cube(int *ptr, int n)
{
    for (int i =0; i<n;i++)
    {
        int val = *(ptr + i);
        printf("Cube of %d: %d\n", val, val * val * val);
    }
}

int main()
{
    int arr[] = {2,3,4};
    cube(arr,3);
    return 0;
}

// que 5//

#include <stdio.h>

int main()
{
    int count = 11;

    for (int i = 1; i<=5; i++)
    {
        for (int j=1; j<=i;j++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }

    return 0;
}