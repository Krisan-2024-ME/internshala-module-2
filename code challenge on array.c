#include<stdio.h>
int main(){
    int a[2][3],r,c, sum = 0;
    for(int r = 0; r<2; r++){
        for(int c = 0; c<3; c++){
            printf("Enter the number: ");
            scanf("%d",&a[r][c]);
             sum =sum + a[r][c];
        }
    }
    
     puts("\nThe 2D array is :");
    for(int r = 0; r<2; r++){
        for(int c = 0; c<3; c++){
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }
   
    
    printf("sum  = %d ",sum);
    return 0;
}