#include <stdio.h>
int main (){
    int n, reverse=0,rem,temp;
    printf("enter number to check palindrome number or not:\n");
    scanf ("%d", &n);
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        reverse= reverse*10+rem;
        temp/=10;
    }
    if (reverse==n)
    {
        printf ("%d is a palindrome number",n);
    }
    else {
        printf ("%d is a palindrome number",n);
    }
    return 0;
    }
    