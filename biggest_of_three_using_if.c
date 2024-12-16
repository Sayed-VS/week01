#include <stdio.h>

int main() {
    int number1, number2,number3;

    printf("Enter number 1: ");
    scanf("%d", &number1);

    printf("Enter number 2: ");
    scanf("%d", &number2);

    printf("Enter number 3: ");
    scanf("%d", &number3);

    if(number1 > number2 && number1 > number3){
        printf("The biggest number is: %d\n", number1);
    }
    else if(number2 > number1 && number2 > number3) {
        printf("The bigger number is: %d\n", number2);
    }
    else if(number3 > number1 & number3 > number2){
        printf("The bigger number is: %d\n", number3);
    }
    else {
        printf("The  numbers are equal\n");
    }
        
return 0;
    
}