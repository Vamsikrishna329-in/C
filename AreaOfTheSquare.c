//area of a square
#include<stdio.h>
int main(){
    double n,area;
    printf("Enter the side of a Square:");
    scanf("%lf",&n);
    area = n*n;
    printf("The area of the Square if side %.2lf is: %.3lf",n,area);
    return 0;
}
