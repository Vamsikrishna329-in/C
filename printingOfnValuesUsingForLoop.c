//printing of n values using for loop
#include<stdio.h>
int main(){
  int i,n;  
  printf("Enter number of value to print:");
  scanf("%d",&n);
  for (i = 0; i < n+1; i++) {
  printf("%d\n", i);
}
  
  return 0;
}
