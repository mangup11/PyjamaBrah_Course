
#include <stdio.h>

void main(){
    float a, b;
    float result;
    char sign;
    printf("Welcome\n");
    printf("Enter the first number\n");
    scanf(" %f", &a);
    printf("Enter the second number\n");
    scanf(" %f", &b);
    printf("Select one operation: + - / *\n");
    scanf(" %c", &sign);

    if(sign == '+') result = a + b;
    else if(sign == '-') result = a - b;
    else if(sign == '*') result = a * b;
    else if(sign == '/') {
        if (b == 0){
            printf("Division with 0 not allowed");
            return;
        }
        else result = a / b;
    }
    else {
        printf("Invalid input");
        return;
    }
    printf("The result is %f", result);
}