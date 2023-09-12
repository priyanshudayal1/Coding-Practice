#include<iostream>
using namespace std;
#include<vector>

void display(vector <int> arr){
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

void addElements(vector <int> arr,int n){
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        arr.push_back(e);
    }
}

int main()
{
    vector <int> arr;
    cout<<"How many elements you want?";
    int n;
    cin>>n;
    addElements(arr,n);
    display(arr);
    return 0;
}