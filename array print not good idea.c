#include <stdio.h>

int main(){
    int arrOne[]= {12,23,45,56,78};
    int arrTwo[]= {74,85,96,58,47};
    int arrThree[]= {47,58,69,74,85};
    
    int arr[3][5]= {
                    {12,23,45,56,78},
                    {74,85,96,58,47},
                    {47,58,69,74,85}  
                   };
  //acces an element: arr[row][columan]
  //modified element: arr[row][columan]=value
    arr[2][4] =98;
   
   //print 2D std::array 
   
    for(int c = 0; c<5; c++){
       printf("%d ",arr[0][c]);
    }
    printf("\n");
   
    for(int c = 0; c<5; c++){
       printf("%d ",arr[1][c]);
    }
    printf("\n");
    for(int c = 0; c<5; c++){
       printf("%d ",arr[2][c]);
    }
    printf("\n");
    return 0;
    }
