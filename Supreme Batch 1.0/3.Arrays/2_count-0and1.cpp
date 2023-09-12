#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,0,1,0,1,1,1,0,0};
    int zero=0,one=0;
    int n=9;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
    }
    cout<<"The number of zeroes in the array is:"<<zero<<endl;
    cout<<"The number of ones in the array is:"<<one<<endl;
    return 0;
}