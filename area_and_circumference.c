#include<stdio.h>

int main(){
    float radius=0.0,area=0.0,circumference=0.0;
    
    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;
    printf("The area of circle is : %f \n",area);

    circumference = 2 * 3.14 * radius;
    printf("The circumference of the circle is : %f \n",circumference);
    
    return 0;
}