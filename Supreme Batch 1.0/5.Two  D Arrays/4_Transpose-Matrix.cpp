#include<iostream>
using namespace std;
void Transpose(int arr[][3]){
    
}

int main()
{

    int arr[3][3];
    int transpose[3][3];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"The Matrix is ::"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // swap(arr[i][j],arr[j][i]);
            transpose[j][i]=arr[i][j];
        }
    }
    cout<<"The Matrix after the transpose is ::"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}