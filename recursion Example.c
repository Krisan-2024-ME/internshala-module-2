#include<stdio.h>
void greetUser (int);
int main(){
    // Identify the recursive condition to terminate the condition
    greetUser (5);
    return 0;
    
}
void greetUser(int num){
    if (num>0){
        printf("Welcome\n");
        greetUser(--num);
    }
}