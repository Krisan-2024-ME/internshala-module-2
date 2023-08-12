
//with argument with return

#include<stdio.h>
int add (int ,int);
int main(){
    int a, b, sum;
    printf("Enter the two number :");
    scanf("%d%d",&a,&b);
    sum = add(a,b);
    printf("Addition of two number = %d",sum);
}
int add (int a, int b){
    int c;
    c= a+b;
    return (c);
}