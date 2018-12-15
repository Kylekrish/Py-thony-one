#include <stdio.h>

int main()
{   int k;
    printf("enter a number:\n");
    scanf("%d",&k);
    if(k%2==0)
    printf("even");
    else if(k<0)
    printf("invalid");
    else
    printf("odd");

    return 0;
}
