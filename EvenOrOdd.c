// To Check a Number is a even or odd
#include <stdio.h>

int main() {
    int number;
    
    printf("Enter the number:");
    scanf("%d",&number);
    if(number < 0){
        printf("Enter valid number");
        return 0;
    }
    if(number % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }

    return 0;
}
