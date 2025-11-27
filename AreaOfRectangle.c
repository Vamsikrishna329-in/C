//area of a Rectangle
#include<stdio.h>
int main(){
    double l,b,area;
    printf("Enter the length of Rectangle:");
    scanf("%lf",&l);
    printf("Enter the breadth of a Rectangle:");
    scanf("%lf",&b);
    area = l*b;
    printf("The area of the rectangle if sides %.2lf,%.2lf is: %.3lf",l,b,area);
    return 0;
}
