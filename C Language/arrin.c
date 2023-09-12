#include<stdio.h>
int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        printf("Enter the element of array:");
        scanf("%d",&arr[i]);

    }
    printf("[");
    for (int i=0;i<5;i++){
        printf("%d, ",arr[i]);
    }
    printf("]");
    return 0;
}