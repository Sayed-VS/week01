#include <stdio.h>

int main() {
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);

    printf("Enter number 2: ");
    scanf("%d", &number2);

    if(number1 < number2){
        printf("The bigger number is: %d\n", number2);
    }
    else if(number1 > number2) {
        printf("The bigger number is: %d\n", number1);
    }
    else {
        printf("The both numbers are equal\n");
    }
        
return 0;
    
}
