#include<stdio.h>
float perimeter(float,float);
int main(){
    float l, b , c;
    printf("Enter the length and breadth of rectangle:\n");
    scanf("%f%f",&l,&b);
    c = perimeter(l,b);
    printf("<<<<<<<welcome message>>>>>>>>>>>>\n");
    printf("perimeter of rectangle =%.2f",c);
    return 0;
}
float perimeter(float l,float b){
    float p;
    p = 2*(l*b);
    return(p);
}
