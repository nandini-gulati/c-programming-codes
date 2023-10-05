#include <stdio.h>
int main () {
    int marks;
    printf("\nEnter The Marks: ");
    scanf("%d", &marks);
    switch(marks/10) {
        case 10:
        case 9:
            printf("\n Your Grade is: A"); 
            break;
        case 8 :
            printf("\n Your Grade is: 8" ); 
            break;
        case 7 :
            printf("\n Your Grade is: C"); 
            break;
        case 6:
            printf("\n Your Grade is: D" );
            break;
        case 5:
            printf("\n Your Grade is: E" ); 
            break;
        case 4:
            printf("\n Your Grade is: E--"); break;
        default:
            printf("\n You Grade 15: F or Fail\n");
    }

return 0;
}
