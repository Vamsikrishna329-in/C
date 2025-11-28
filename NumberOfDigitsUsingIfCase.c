//Number of digits using if case
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Number of digits in given value is: 1");
    } else {
        while (n > 0) {
            n = n / 10;
            count++;
        }
        printf("Number of digits in given value is: %d", count);
    }

    return 0;
}
