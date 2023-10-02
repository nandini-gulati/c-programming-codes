#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5,totalmarks, percentage;

    
    printf("Enter marks in subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks in subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks in subject 3: ");
    scanf("%f", &subject3);

    printf("Enter marks in subject 4: ");
    scanf("%f", &subject4);

    printf("Enter marks in subject 5: ");
    scanf("%f", &subject5);

    
    totalmarks = subject1 + subject2 + subject3 + subject4 + subject5;

    percentage = (totalmarks/(5*100)) * 100;

   
    printf("Total marks: %f\n", totalmarks);
    printf("Percentage: %f\n", percentage);

    return 0;
}