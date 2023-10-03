#include <stdio.h>
int main () {
    int n,i,sum=0;
    printf ("Enter a positive integer:");
    scanf ("%d",&n);
    i=1;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf ("sum= %d",sum);
    return 0;

}