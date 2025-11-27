#include<stdio.h>
int main(){
    int x,y,z;
   
    printf("Enter the first value:");
    scanf("%d",&x);
    printf("Enter the second value:");
    scanf("%d",&y);
    printf("Enter thirs value:");
    scanf("%d",&z);
    int sum = x + y;
    int sub = x - y;
    int mul = x * y;
    int div = x / y;
    int mod = x % y;
    printf("Addition of the number is %d\n", sum);
    printf("Subtraction of the number is %d\n", sub);
    printf("Multiplication of the number is %d\n", mul);
    printf("Division of the number is %d\n", div);
    printf("Modulus of the number is %d\n", mod);
    ++z;
    printf("Increment of the number is %d\n", z);
    --z;
    printf("Decrement of the number is %d\n", z);
    

  
  return 0;
}
