// no argument with return 

#include<stdio.h>
int add (void);
int main (){
    int sum;
    sum = add();
    printf("addition of two number =%d",sum);
    return 0;
}
int add (){
    int a,b,c;
    printf("enter the two number :");
    scanf("%d%d",&a,&b);
    c = a+b;
    return(c);
}