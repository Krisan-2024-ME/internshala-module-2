#include<stdio.h>
int main(){
    long scoreTwo[5];
    for( int i = 0; i < 5; i++){
        printf("Enter the value of index %d:", i);
        scanf("%ld",&scoreTwo[i]);
    }
    puts("\nprinting the elements of scoreTwo:\n");
    for(int i = 0; i<5; i++){
        printf("%ld\n",scoreTwo[i]);
    }
    return 0;
}