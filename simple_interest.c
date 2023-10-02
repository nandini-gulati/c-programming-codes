#include<stdio.h>
int main() {
    float p=0.0,rate=0.0,time=0.0,si=0.0;
    printf("Enter principal amount : ");  
    scanf("%f", &p);  
    printf("Enter rate of interest : ");  
    scanf("%f", &rate);  
    printf("Enter time period in  year : ");  
    scanf("%f", &time);  

    si = (p * time * rate) / 100;  
    printf("\nSimple Interest = %f", si);
    return 0;
}