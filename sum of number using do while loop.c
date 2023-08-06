#include<stdio.h>
int main(){
    int num, sum = 0;
    
    do{
        printf("Enter the num:");
        scanf("%d",&num);
        sum = sum + num;
        
    }while(num != 0);
    printf("%d\n",sum);
    return 0;
}