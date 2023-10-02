#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int first_power = number;
    int square = number * number;
    int cube = square * number;
    printf("First Power: %d\n", first_power);
    printf("Square: %d\n", square);
    printf("Cube: %d\n", cube);
    return 0;
}
