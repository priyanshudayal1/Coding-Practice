#include<stdio.h>

void display(int arr[],int n){
    //Traversal
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int indInsertion(int arr[],int size,int item,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=item;
    return 1;

}

//MAIN
int main(){
    int arr[100]={1,2,6,78};
    int size=4;
    display(arr,size);
    int index,item;
    printf("\nEnter the item to be inserted:");
    scanf("%d",&item);
    printf("\nEnter the index to be inserted:");
    scanf("%d",&index);
    indInsertion(arr,size,item,100,index);
    size++;
    display(arr,size);
    return 0;



}
