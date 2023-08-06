#include<stdio.h>
int main(){
    int num,s = 0, c, r;
    printf("Enter the num:");
    scanf("%d",&num);
    c = num;
    while(num>0){
        r = num % 10;
        s = r + (s * 10);
        num = num / 10;
    }
    if (c == s)
    printf("this number is pelindrome number");
    else
    printf("this number is not pelindrome number");
    return 0;
}
    
    
    