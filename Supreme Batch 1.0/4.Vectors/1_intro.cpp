#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    vector <int> arr(n);
    cout<<"\nEnter the elements of the array:";
    for(int i=0;i<arr.size();i++){
        int ind;
        cin>>ind;
        arr.push_back(ind);
    }
    for(int i;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}