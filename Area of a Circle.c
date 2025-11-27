//Area of a Circle
#include<stdio.h>
int main(){
    double n,area;
    printf("Enter the radius of Circle:");
    scanf("%lf",&n);
    area = n*3.14*n;
    printf("The Area of the Circle if side %.2lf is: %.3lf",n,area);
    return 0;
}
