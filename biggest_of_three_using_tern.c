#include <stdio.h>

int main() {
    int number1, number2, number3, biggest;

    printf("Enter number 1: ");
    scanf("%d", &number1);

    printf("Enter number 2: ");
    scanf("%d", &number2);

    printf("Enter number 3: ");
    scanf("%d", &number3);

    biggest = (number1 > number2 ) ? (number1 > number3 ? number1 : number3) : (number2 > number3 ? number2 : number3);

    printf("The biggest number is: %d\n", biggest);
return 0;
    
}