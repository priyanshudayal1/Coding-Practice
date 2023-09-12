#include<stdio.h>
void swap(int *a,int *b);


int main(){
    int a,b;
    printf("Enter the values fo a and b:");
    scanf("%d %d ",&a,&b);
    printf("The values of a and b before swap is : %d and %d ",a,b);
    swap(&a,&b);
    printf("The values of a and b after swap is : %d and %d",a,b);
    return 0;
}

void swap(int *a,int *b){
    int t =*a;
    *a=*b;
    *b=t;
}

