#include<stdio.h>
int main (){
    //WAP to find out the factorial of n
    int num;
    long factorial = 1;
    
    
    printf("Enter the num:");
    scanf("%d",&num);
    while(num>0){
        
        factorial = factorial * num;
        num--;
           
    }
       printf("factorial is:%ld",factorial);
 
    
    return 0;
}