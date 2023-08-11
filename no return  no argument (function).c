
//find the addition of two number using function.
//there are diffrent diffrent 4 method , seen the one by one
//1. No return and no argument.
#include<stdio.h>
void add (void);
int main(){
    add();
    return 0;
    
}
void add(void){
    int a, b , sum;
    printf("Enter the tow numbetr: ");
    scanf("%d%d", &a,&b);
    sum = a+b;
    printf("Addition of two number = %d",sum);
}