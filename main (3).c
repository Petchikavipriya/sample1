#include<stdio.h>
#include<conio.h>

int main(){
   int total;
   int arr[] = {1,2,4,6,3,7,8};
   total = 8;
   int result = total * ((total + 1) / 2);
   int sum = 0;
   for (int i: arr) {
       sum += i;
   }
    printf( result - sum);
    
}