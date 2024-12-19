#include <stdio.h>
#include <math.h>
#include <stdbool.h>




void append(int array[],int size,int element){
    for (int i =0;i < size;i++){
        if (array[i]==0){
            array[i] = element;
            break;
        }
    }
}
void myfunc(int start,int end){

    for (int i = 0;i*i <= end;i++){
        if (i*i >= start && i*i <= end){
            printf("%d\n",i*i);
        }
        }
}


int main(){
    
    
    myfunc(1,1000000);
    
    
    
    
    
    
    
    // int myArray[10];
    // myArray[0] = 5;
    // for (int i = 0;i < 10; i++){
    //     printf("%d\n",myArray[i]);


    
    
    
    
    
    
    // int matrix[3][3] = {
    //         {1,2,3},
    //         {4,5,6},
    //         {7,8,9},                       
    // };                   
    
    
    
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 3;j++){
    //         printf("%d,",matrix[i][j]);
    //     }
    //     printf("\n");
    
    // } 
    
    
    
    // int example[10]={};
    // for (int i = 0;i < 10;i++){
    //     printf("%d",example[i]);
    // }

    
    int example[10] = {};
    
    
    
    
    
    return 0;

}



