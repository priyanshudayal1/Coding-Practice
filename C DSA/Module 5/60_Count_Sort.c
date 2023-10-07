#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
void printArr(int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int maxInArr(int *A,int n){
    int max=INT_MIN;
    for (int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }

    }
    return max;
}

void countSort(int *A,int n ){
    int max=maxInArr(A,n);
    int *count=(int *)malloc((max+1)*sizeof(int));
    //initialising with 0
    for(int i=0;i<max+1;i++){
        count[i]=0;
    }  
    //Increment the corresponding index in the count array
    for(int i=0;i<n;i++){
        count[A[i]]=count[A[i]]+1;
    }
    int i=0;//counter for count array
    int j=0;//given array
    while(i<=max){
        if(count[i]>0){
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }

}

int main(){
    int A[]={9,1,4,14,4,15,6};
    int n=7;
    printArr(A,n);
    countSort(A,n);
    printArr(A,n);
    return 0;
}