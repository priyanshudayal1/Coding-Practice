#include<stdio.h>
#include<stdlib.h>

void printArr(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void insertionSort(int *arr,int n){
    for(int i=1;i<n;i++){
         int key=arr[i],j=i-1;
         while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
         }
         arr[j+1]=key;
    }

}
int main(){
    int arr[]={7,12,3,4,1};
    int n=5;
    printf("The array before sorting is : \n");
    printArr(arr,n);
    insertionSort(arr,n);
    printf("The array after sorting is : \n");
    printArr(arr,n);

    return 0;

}