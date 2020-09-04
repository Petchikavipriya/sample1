#include <stdio.h>
#include<conio.h>
int main()
{
    int X,Y;
    printf("Enter X and Y\n");
    scanf("%d\n%d",&X,&Y);
    printf("Before Swapping\n");
    printf("X=%d\nY=%d\n",X,Y);
    printf("After Swapping without a third variable\n");
    printf("X=%d\nY=%d",Y,X);

    return 0;
}
