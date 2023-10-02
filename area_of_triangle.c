#include <stdio.h>

int main() {
    float base=0.0, height=0.0, area=0.0;

   
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;
    printf("The area of triangle is : %f \n",area);
    return 0;
}
