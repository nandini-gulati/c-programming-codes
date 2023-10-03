#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if (num < 0) {
        num = -num;
        printf("Reversed number (with sign): -");
    } else {
        printf("Reversed number: ");
    }

    
    for (; num > 0; num /= 10) {
        int digit = num % 10;
        reverse = reverse * 10 + digit; 
    }

    printf("%d\n", reverse);

    return 0;
}
