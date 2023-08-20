#include<stdio.h>
int main(){
    float value[] = {12.3,32.2,54.41,85.32,78.321,96.35};
    float *ptr;
    ptr = value;
    for(int i =0; i<6; i++){
        printf("value of index %d = %.2f\n",i,*ptr);
        ptr++;
    }
    return 0;
}