//printing sum of n values using for loop
#include<stdio.h>
int main(){
    int n;
  int sum = 0; 
  printf("Enter number of value to print:");
  scanf("%d",&n);
  for (int i = 0; i <= n; i++) {
  sum = sum + i;
}

printf("Sum is %d", sum);

  
  return 0;
}
