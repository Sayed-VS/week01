#include <stdio.h>

int main() {
    int number1, number2, biggest;

    printf("Enter number 1: ");
    scanf("%d", &number1);

    printf("Enter number 2: ");
    scanf("%d", &number2);


    biggest = (number1 > number2) ? number1 : number2;

    printf("The biggest number is: %d\n", biggest);
return 0;
    
}