#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT64_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"The maximum integer in the array is : "<<max<<endl;
    int min=INT64_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min){
               min=arr[i][j];
            }
        }
    }
    cout<<"The minimum integer in the array is : "<<min<<endl;
    return 0;
}