#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int i;
    printf("input a number: ");
    scanf("%i", &num);
    for (i = 0; i <= num; i++) {
        sum += i;
    }
    printf("the result is: %d\n", sum);
    return 0;
}