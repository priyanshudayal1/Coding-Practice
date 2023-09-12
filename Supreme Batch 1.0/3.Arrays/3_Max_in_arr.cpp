#include<iostream>
using namespace std;
int main()
{   
    int arr[]={1,2,3,10,77,20,60,803,999,10050,1,2,3};
    int max=INT64_MIN;
    for (int i=0;i<13;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The maximum number in the array is:"<<max<<endl;
    return 0;
}