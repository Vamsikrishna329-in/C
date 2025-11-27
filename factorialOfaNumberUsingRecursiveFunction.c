// factorial of a number using recursive function
#include <stdio.h>
    int Factorial(int number){
        if(number == 0 || number == 1){
            return 1;
        }else{
            return number*Factorial(number-1);
        }
    }
int main() {
    int number;
    
    printf("Enter the number the number:");
    scanf("%d",&number);
    if(number>0){
        printf("Factorial of a %d number is %d",number,Factorial(number));
    }

    return 0;
}
