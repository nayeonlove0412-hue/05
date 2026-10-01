#include <stdio.h>

int main () { 
    int num;
    printf("enter an integer: ");
    scanf("%d", &num);
    if (num >= 0) {
        printf("absolute value is %d\n",num);
    } else {
        printf("absolute value is %d\n",-num);
    }
    return 0;
}