#include <stdio.h>
#include<conio.h>
static int digitsum(int number){
    int sum=0;
    while(number>0){
        sum += number%10;
        sum /= 10;
    }if(sum>9){
        sum=digitsum(sum);
    }
    return sum;
}
int main()
{
    int number;
    scanf("%d",&number);
    printf("%d",digitsum(number));
    return 0;
}
