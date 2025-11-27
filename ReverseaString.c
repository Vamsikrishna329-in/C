//Reverse a string
#include <stdio.h>
#include <string.h>
void reverseString( char str[]){
int start = 0;
char temp;
int end = strlen(str) -1;
while(start<end){
    temp = str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;
}
}
int main(){
    char str[100];
    printf("Enter the String:");
    scanf("%s",str);
    reverseString(str);
    printf("Reversed String is :%s",str);
    return 0;

}
