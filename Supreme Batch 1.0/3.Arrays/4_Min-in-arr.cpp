#include<iostream>
using namespace std;
int main()
{   
    int arr[]={1,2,3,10,77,20,60,803,999,10050,1,2,3};
    int min=arr[13];
    for (int i=0;i<13;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The minimum number in the array is:"<<min<<endl;
    return 0;
}