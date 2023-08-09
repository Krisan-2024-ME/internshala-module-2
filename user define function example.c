#include<stdio.h>
void sum (int ,int);
int main(){
    sum(2,3);
    sum(41,25);
    sum(45,69);
    return 0;
}
void sum(int num1,int num2){
int s = num1+num2;
printf("sum is:%d\n",s);
}