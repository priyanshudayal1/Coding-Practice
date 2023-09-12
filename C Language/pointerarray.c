#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=&arr[0];
    ptr=ptr+2;
    printf("The 3rd element of the array is: ");
 
   printf("%d",*ptr);
   return 0;
}