//perimeter of Rectangle
#include<stdio.h>
int main(){
    double l,b,peri;
    printf("Enter the length of Rectangle:");
    scanf("%lf",&l);
    printf("Enter the breadth of a Rectangle:");
    scanf("%lf",&b);
    peri = 2*(l+b);
    printf("The perimeter of the rectangle if sides %.2lf,%.2lf is: %.3lf",l,b,peri);
    return 0;
}
