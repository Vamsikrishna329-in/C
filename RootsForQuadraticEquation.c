#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,discriminat;
    printf("Enter the a,b,c values with space between them(-nan means roots are imaginary):");
    scanf("%f %f %f",&a, &b, &c);
    discriminat = b*b - 4*a*c;
    float r1= (-b+sqrt(discriminat))/(2*a);
    float r2= (-b-sqrt(discriminat))/(2*a);
    if(discriminat > 0){
        printf("The root are real \n the root are %.2f %.2f",r1,r2);
    }else if(discriminat = 0){
        printf("Only one root are real \n the root are %.2f %.2f",r1,r2);
    }else{
        printf("The root are %.2f %.2f",r1,r2);
    }
    
    return 0;
}
