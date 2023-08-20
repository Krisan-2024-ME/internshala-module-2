#include<stdio.h>
int main(){
    int a,b;
    int *x,*y;
    x = &a;
    y = &b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    int sum = *x+*y;
    printf("The sum is %d.\n",sum);
    return 0;
}