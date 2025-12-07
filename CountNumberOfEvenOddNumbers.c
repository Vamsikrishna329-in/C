//this program is used count no.of even,odd number
#include <stdio.h>
int main() {
    int n;
    int even = 0,odd = 0;
    int array;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the Values:");
    for (int i = 0;i< n;i++){
        
        scanf("%d",&array);
    
    if(array % 2 == 0){
        even ++;
    }else{
        odd ++;
    }
    }
    printf("The even number are: %d \n The odd numbers are: %d",even,odd);
    return 0;
}
