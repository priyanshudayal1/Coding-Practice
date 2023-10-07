#include<stdio.h>



void selectionSort(int *arr,int n){
    int minInd;
    printf("\nrunning selection sort\n");
    for(int i=0;i<n;i++){
        minInd=i;
        for (int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                minInd=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minInd];
        arr[minInd]=temp;
        //swap(arr[i],arr[minInd]); 
    }
}


void printArr(int *arr,int n ){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={3,5,2,13,12};
    int n=5;
    printArr(arr,n);
    selectionSort(arr,n);
    printArr(arr,n);
}