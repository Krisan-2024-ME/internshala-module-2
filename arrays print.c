#include<stdio.h>
int main(){
    //diving into std::std::array
    long scoreOne[5]= {501,523,123,456,478};
    //modify element
    scoreOne[1]=500;
    scoreOne[4]=900;
    //print all the element using loop
    for(int i = 0; i<5; i++){
        printf("%ld\n",scoreOne[i]);
    }
    return 0;
}
    