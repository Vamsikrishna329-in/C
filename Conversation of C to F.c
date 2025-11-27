// Conversation of C to F
#include <stdio.h>

int main() {
    float temperature;
    printf("Enter the temperature in Celsius :");
    scanf("%f",&temperature);
    float f = (temperature * 1.8) +32;
    printf("The temperature in Fahrenheit is: %.2f\n",f);
    return 0;
}
