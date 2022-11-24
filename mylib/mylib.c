#include <stdio.h>

// ITERATIVE FIBONACCI
int iterativeFibonacci(int num){

    int num1 = 0;
    int num2 = 1;
    int output;

    if (num == 0){
        return num1;
    } else if (num == 1){
        return num2;
    } else{
        for(int i = 2; i <= num; i++){
            output = num1 + num2;
            num1 = num2;
            num2 = output;
        }
        return output;
    }
    
    
}

// RECURSIVE FIBONACCI
int recursiveFibonacci(int num){

    if (num == 0){
        return 0;
    } else if (num == 1){
        return 1;
    } else{
        return recursiveFibonacci(num-1)+recursiveFibonacci(num-2);
    }
    
}
