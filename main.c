#include <stdio.h>

int main() {
    int num1, num2;
    char c;

    printf("enter the calculation: ");
    
    if (scanf("%d %c %d", &num1, &c, &num2) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    if (c == '+') {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if (c == '-') {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    }
    else if (c == '*') {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }
    else if (c == '/') {
        if (num2 != 0) {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        }
        else {
            printf("Error: Division by zero\n");
        }
    }
    else {
        printf("Invalid operator\n");
    }

    return 0;
}