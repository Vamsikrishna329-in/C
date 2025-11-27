//perimter of a Circle
#include<stdio.h>
int main(){
    double n,peri;
    printf("Enter the radius of Circle:");
    scanf("%lf",&n);
    peri = 2*3.14*n;
    printf("The perimeter of the Circle if side %.2lf is: %.3lf",n,peri);
    return 0;
}
