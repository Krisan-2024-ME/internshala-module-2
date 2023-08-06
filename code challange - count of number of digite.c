#include<stdio.h>
int main(){
    long num, counter = 0;
    printf("Enter the value of num:\n");
    scanf("%ld",&num);
    while(num != 0){
        num = num/10;
         counter ++;
    }
    printf("The number of digite in thish number is %ld",counter);
    
}