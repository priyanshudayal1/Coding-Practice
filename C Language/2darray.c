#include<stdio.h>

int main(){
    int m,n;
    printf("Enter the size of the 2d array:\n");
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("Enter %d row and %d column element:\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }

    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
            
        }
        printf(" \n");

    }
    return 0;
}