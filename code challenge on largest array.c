#include<stdio.h>
int main (){
    long a[10] , largest = 0;
    for(long i = 0; i<10; i++){
        printf("Enter the value of %ld:",i);
        scanf("%ld",&a[i]);
    }
    printf("The array is: ");
    for(long i = 0; i<10; i++){
        printf("%ld ",a[i]);
        
        if(a[i] > largest)
        largest = a[i];
    }
    printf("\nThe largest number in the array is:%ld",largest);
    return 0;
}