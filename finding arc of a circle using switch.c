//finding arc of a circle using switch
#include <stdio.h>
int main() {
    double r, n, arc;
    int choice;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    printf("Choose input type:\n");
    printf("1. Radians\n");
    printf("2. Degrees\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter angle in radians: ");
            scanf("%lf", &n);
            arc = r * n;   
            printf("Arc length for angle %.2lf radians is: %.3lf\n", n, arc);
            break;
        case 2:
            printf("Enter angle in degrees: ");
            scanf("%lf", &n);
            arc = (n / 360.0) * (2 * 3.14 * r);  
            printf("Arc length for angle %.2lf degrees is: %.3lf\n", n, arc);
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
