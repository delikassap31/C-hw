#include <stdio.h>
#include <stdbool.h>

//This is a line comment in C
/*
"""
This is a multiline comment in C
"""
'''
This is a multiline comment in C

*/

int main(){
    // printf("Comments are fun! \n "); // This line print out a string.
    
    // const char *lecture ="Intro to Programming I \n";
    // printf("%s\n",lecture);

    // const char *lecturer = "Ali";
    // printf("%s\n", lecturer);
    
    // int number_of_students = 40;
    // printf("%d\n", number_of_students);
    // printf("number_of_students variable type: int\n");
// -------------------------------------------------------------------------
    // float average_age = 19.5;
    // printf("%.1f\n", average_age);
    // printf("average_age variable type: float\n");

    // float average_quiz_notes = 0.2;
    // printf("%.1f\n", average_quiz_notes);
    // printf("average_quiz_notes variable type: float\n");

    // bool can_they_pass = false;
    // printf("%d\n", can_they_pass); 
    // printf("can_they_pass variable type: bool\n");
// ------------------------------------------------------------------------
    // int number1 , number2;
    // printf("Give me first number: ");
    // scanf("%d",&number1);
    // printf("Give me second number: ");
    // scanf("%d",&number2);
    // int sum = number1 + number2;
    // printf("Total is: %d",number1+number2);

    // int total_of_two_bool = true + true;
    // printf("%d\n", total_of_two_bool);  
    // printf("total_of_two_bool type: int\n");    
    
    // ---------------------------------------------------------------------------
    // int a = 10;
    // int b = 2;

    // int mul = a * b;
    // float float_division = (float)a / b;
    // int int_division = a /b;


    // printf("Mul= %d\n",mul);
    // printf("Float div= %f\n",float_division);
    // printf("Integer Div: %d\n", int_division);

    
    // ---------------------------------------------------------------------------
    printf("%d\n", true & true);        // Output: 1
    
    printf("%d\n", true & false);       // Output: 0
    
    printf("%d\n", false | true);       // Output: 1
    
    printf("%d\n", false | !false);     // Output: 1

    
    
    
    return 0;
}