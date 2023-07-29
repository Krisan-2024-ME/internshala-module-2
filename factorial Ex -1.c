#include<stdio.h>
int main(){
    //WAP to find out the factorial of 5
    int num = 5;
    long factorial = 1;
    while(num > 0){
        factorial = factorial * num;
        num--;
        
    }
    printf("factorial is:%ld",factorial);
    return 0;
}