#include<stdio.h>
int main(){
    int a,t,r;
    printf("This program is used to find Simple interest\n");
    printf("Enter the time period(in years):");
    scanf("%d",&t);
    printf("Enter the amount:");
    scanf("%d",&a);
    printf("Enter the annual rate:");
    scanf("%d",&r);
    int s;
    s = (t*r*a)/100;
    printf("The annual interest amount is: %d\n", s);
    printf("The total amount is:%d", s+a);
    return 0;
}
