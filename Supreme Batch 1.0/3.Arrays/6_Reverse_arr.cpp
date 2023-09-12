#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,10,77,20,60,803,999,10050,1,2,3};
    int s=0,e=12;
    cout<<"The Array before reverse: "<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    while(s!=e){
        swap(arr[s],arr[e]);
        e--;
        s++;
    }
    cout<<"\nThe reverse Array is :"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }

     return 0;
}