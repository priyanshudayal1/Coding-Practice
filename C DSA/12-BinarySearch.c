#include<stdio.h>

int binarySearch(int arr[],int size,int key){
    int left=0,right=size-1;
    int mid;
    while (left<=right){
        mid=left+(right/2-left/2);
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            right=mid-1;
        }
        else if(key>arr[mid]){
            left=mid+1;
        }
    }
    return -1;

}

int main(){
    int arr[]={2,8,14,32,66,100,104,203,400};
    int n=9;
    int item;
    printf("\nEnter the element to be searched: ");
    scanf("%d",&item);
    int index=binarySearch(arr,n,item);
    if(index==-1){
        printf("\nElement not found.");
    }
    else{
        printf("\nElement found at index: %d",index);
    }
    return 0;
}