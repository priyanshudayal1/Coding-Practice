#include<stdio.h>
void deletion(int arr[],int size,int index){
    if (size<1){
        printf("\nUnder Flow..!!");
    }
    for (int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }

}


int main(){
    int n ;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[]={1,2,5,18,8};
    printf("\nThe array before deletion is :\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int index;
    printf("\nEnter the index to be deleted:");
    scanf("%d",&index);
    deletion(arr,n,index);
    n--;
    printf("\nThe array after deletion is :\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}