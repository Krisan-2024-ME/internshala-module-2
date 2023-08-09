#include<stdio.h>
int main(){
    
    //User input
    
    char name[40];
    printf("Enter the name:");
    //scanf("%s", name);
    scanf("%[^\n]%*c",name);
    printf("%s",name);
    return 0;
}