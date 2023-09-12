#include<stdio.h>
//Display
void printArr(int arr[],int n)
{
    printf("\n");
    for (int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}

//Sort Function
void bubbleSort(int *arr,int n){
    int isSorted=0;
    //For passes
    for (int i=0;i<n;i++){
        isSorted=1;
        for(int j=0;j<(n-1-i);j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        isSorted=0;
        }
        if (isSorted){
            return;
        }
        }
}
int main(){
    int a[]={12,54,7,23,9};
    int n=6;
    printf("\nThe array before sorting:");
    printArr(a,6);
    bubbleSort(a,6);
    printf("\nThe array after sorting:");
    printArr(a,6);
    int arr[]={1,2,3,4,5};
    bubbleSort(arr,5);
    printArr(arr,5);
    return 0;
}