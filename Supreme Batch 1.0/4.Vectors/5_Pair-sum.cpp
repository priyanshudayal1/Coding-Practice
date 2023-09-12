#include<iostream>
using namespace std;
#include<vector>
int main()

{
    vector <int> arr{1,3,5,7,2,4,6};
    int key;
    cout<<"Enter the sum key:";
    cin>>key;
    for (int i=0;i<arr.size();i++){
        int first=arr[i];
        for(int j=i+1;j<arr.size();j++){
            if((first+arr[j])==key){
                cout<<first<<" , "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}