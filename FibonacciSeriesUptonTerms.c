// fibonacci series upto n terms
#include <stdio.h>
void fibonacci(int number){
    int prev = 0;
    int curr = 1;
    printf("Fibonacci series upto %d terms:",number);
    for( int i = 1; i<=number;i++){
        printf("%d ", prev);
        int next = prev + curr;
        prev = curr;
        curr = next;

    }
    printf("\n");
}
int main(){
    int number;
    printf("Enter the number of terms:");
    scanf("%d",&number);
    fibonacci(number);
    return 0;
}
