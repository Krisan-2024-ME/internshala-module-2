#include<stdio.h>
#include<unistd.h>
int main(){
    //WAP to find out the odd number fro 1 to n
    //explore for loops
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int num = 1;
    for(int num = 1; num<=n; num++){
        if(num % 2 != 0)
        printf("%d\n",num);
    }
    return 0;
}