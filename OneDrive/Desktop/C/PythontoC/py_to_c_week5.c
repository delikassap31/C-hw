#include <stdio.h>
#include <stdbool.h>

int factorialFor(int number);
int factorialWhile(int number);
int factorialRecursive(int number);
int fibonacciFor(int number);
int fibonacciWhile(int number);
int fibonacciRecursive(int number);


int main(){
    int fibo3 = fibonacciRecursive(6);
    printf("Fibonacci3: %d",fibo3);
    return 0;
}


int factorialFor(int number){
        if (number < 0){
            return 0;
        }
        if (number == 0){
            return 1;
        }
        int result = 1;
        for (int i = 0; i <= number; i++ ){
            result = result * i;
        }
        return result;
    }

int factorialWhile(int number){
    if (number < 0){
        return 0;
    }
    if (number == 0){
        return 1;
    }
    int result = 1;
    while (number > 0 )
    {
        
        result = result * number;
        number --;
    }
    return result;


}

int factorialRecursive(int number){
   
    
    // Base Case

    if ( number == 1 || number == 0){
        return 1;
    }
    return number * factorialRecursive(number - 1);



}
int fibonacciFor(int number){
    int first = 1; int second = 2; int result = 0;
    if (number == 1 || number == 2){
        return 1;
    }
    for (int i = 3; i <= number; i++){
        result = first + second;
        first = second;
        second = result;
    }
    return result;

}
int fibonacciWhile(int number){
    int first = 1,second =2,result=0;
    if (number == 1 || number == 0){
        return 1;

    }
    while (number > 2){
        result = first + second;
        first = second;
        second = result;
        number --;        

    }
    return result;


}

int fibonacciRecursive(int number){
//Base Case
if (number == 1 || number == 2){
    return 1;

    
}
return fibonacciRecursive(number-1) + fibonacciRecursive(number-2);














}