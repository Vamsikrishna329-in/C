// the avg of n vales
#include <stdio.h>


int main(){
    int n;
    int sum = 0;
    printf("Enter the n value :");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
    printf("Enter the number:");
    scanf("%d",&i);
    sum = sum+i;
    }
    double avg = (double)sum / n;
    printf("The average of %d numbers is %.2f\n", n, avg);

}
