#include<stdio.h>
#include<unistd.h>
int main(){
    //WAP to find out the odd number fro 1 to 50
    //explore for loops
    int num = 1;
    for(int num = 1; num<=50; num++){
        if(num % 2 != 0)
        printf("%d\n",num);
    }
    return 0;
}