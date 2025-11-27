#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    printf("Enter the elements:\n");
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    printf("Sum of n number is : %d",sum);
    return 0;
}
