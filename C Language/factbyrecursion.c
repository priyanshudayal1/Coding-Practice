#include<stdio.h>
int factorial(int n ){
    if (n==1 || n==0){
        return 1;
    }
    else{
         return factorial(n-1)*n;
    }
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("The factorial of the given number is: %d",factorial(a));
    return 0;
}