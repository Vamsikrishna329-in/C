//Counting no.of digits in number
#include<stdio.h>

int main(){

int n,i;

int count = 0;

printf("Enter the number:");

scanf("%d",&n);

for(i=0;i<n;i++){

n = n%10;

count++;

}

printf("Number of digits in GivenValueis:%d",count);

return count;

}
