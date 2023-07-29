#include<stdio.h>
int main(){
    //WAP calculate the sum of 10 number enter by user
    //If user Enters the possitive number then terminate the loop
    int i;
    double number,sum = 0;
    for (i = 1; i <= 10; i++ ){
        printf("Enter number %d:",i);
        scanf("%lf",&number);
        if (number<0)
        break;
        sum += number;
        
    }
    printf("sum = %.2lf",sum);
    return 0;
}