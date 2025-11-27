//Average of two numbers

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int sum = a + b;
    int average = sum / 2;
    printf("The average of two number is %d\n", average);
    return 0;
}
