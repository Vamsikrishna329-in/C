//perimter of a square
#include<stdio.h>
int main(){
    double n,peri;
    printf("Enter the side of a Square:");
    scanf("%lf",&n);
    peri = 4*n;
    printf("The perimeter of the Square if side %.2lf is: %.3lf",n,peri);
    return 0;
}
