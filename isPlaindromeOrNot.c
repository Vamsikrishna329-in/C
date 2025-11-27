// is Plaindrome or not
#include <stdio.h>

int main(){
    int num;
    
    printf("Enter the number:");
    scanf("%d",&num);
    int originalNum = num;
    int reverseNum = 0;
    while(num>0){
        int dig = num%10;
        reverseNum = (reverseNum*10)+dig;
        num /=10;
    }
    if(originalNum == reverseNum){
        printf("The %d number is palindrome:",originalNum);
    }else{
        printf("The %d number is not a palindrome:",originalNum);
    }
    return 0;
    
}
