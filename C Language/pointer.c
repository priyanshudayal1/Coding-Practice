#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    printf("the address of a is :%u",ptr);
    printf("\nThe value of a using pointer is : %u",*(&a));
    return 0;
}