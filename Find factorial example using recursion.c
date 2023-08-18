//find the factorial of 5 using recursion
#include<stdio.h>
#include<conio.h>
long findFactorial(int);
int main(){
    long num = 5;
    long answer;
    long factorial =1;
    answer = findFactorial(5);
    printf("Factorial=%ld",answer);
    return 0;
    
}
long findFactorial(int num){
    if(num>0){
        return num*findFactorial(--num);
    }
    else
    {
        return 1;
    }
}