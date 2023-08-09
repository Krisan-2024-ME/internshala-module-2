#include<stdio.h>
int main(){
    int arr[][5]= {
                  {98,54,12,76,99},
                  {87,75,11,33,45},
                  {17,15,23,21,67}
                  };
    arr[2][4] = 98;
    for(int r = 0; r<3; r++){
        for( int c=0; c<5; c++){
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}