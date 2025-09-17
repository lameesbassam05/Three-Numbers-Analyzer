#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Sum = %d\n", num1 + num2 + num3);
    printf("Average = %d\n", (num1 + num2 + num3) / 3);
    printf("Product = %d\n", num1 * num2 * num3);

    // Find smallest
    if (num1 <= num2 && num1 <= num3)
        printf("Smallest = %d\n", num1);
    else if (num2 <= num1 && num2 <= num3)
        printf("Smallest = %d\n", num2);
    else
        printf("Smallest = %d\n", num3);

    // Find largest
    if (num1 >= num2 && num1 >= num3)
        printf("Largest = %d\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("Largest = %d\n", num2);
    else
        printf("Largest = %d\n", num3);

    return 0;
}