#include<stdio.h>

int linearSearch(int arr[],int size,int key){
    for (int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={4,8,10,12,15,16,2,8};
    int n=8;
    printf("\nThe array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int key;
    printf("\nEnter the element to be found:");
    scanf("%d",&key);
    int index=linearSearch(arr,n,key);
    if (index>=0){
        printf("\nElement found at index :%d",index);
    }
    else{
        printf("\nElement not found.");
    }
    return 0;
}