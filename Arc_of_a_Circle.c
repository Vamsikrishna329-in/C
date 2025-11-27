//Arc of a Circle
#include<stdio.h>
int main(){
    double r,n,arc;
    int choice;
        printf("Enter the radius value of Circle:");
        scanf("%lf",&r);
        printf("Choose input type:\n");
        printf("1. Radians\n");
        printf("2. Degrees\n");
        printf("Enter choice (1 or 2): ");
        scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter angle in radians: ");
        scanf("%lf", &n);
        arc = r * n;   
    } else if (choice == 2) {
        printf("Enter angle in degrees: ");
        scanf("%lf", &n);
        arc = (n / 360.0) * (2 * 3.14 * r);  
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Arc length for angle %.2lf is: %.3lf\n", n, arc);
    return 0;
}

  
