#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements:\n");
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}
