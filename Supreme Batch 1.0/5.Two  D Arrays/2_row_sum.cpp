#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{},{},{}};
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Printing the array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The sum of the rows:"<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+(arr[i][j]);
        }
        cout<<"The sum of the "<<i+1<<" row is : "<<sum<<endl;
    }
    return 0;
}