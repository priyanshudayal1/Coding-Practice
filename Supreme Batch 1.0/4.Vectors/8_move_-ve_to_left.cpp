#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector <int> arr{1,2,-3,4,-5,6};
    int s=0,e=arr.size()-1;
    cout<<"The original array is : "<<endl;
    for(int i : arr){
        cout<< i<<" ";
    }
    cout<<"\n";
    while (s<e){
        if (arr[s]<0){
            s++;
        }
        else if (arr[e]>0){
            e--;
        }
        else{
            swap(arr[s],arr[e]);
        }
    }
    cout<<"The array after sorting is :"<<endl;
    for(int i : arr){
        cout<< i<<" ";
    }
    cout<<"\n";
    return 0;
}