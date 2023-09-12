#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector <int> arr{10,20,30,40};
    int key,triplets=0;
    cout<<"Enter the key for the sum:";
    cin>>key;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if((arr[i]+arr[j]+arr[k])==key){
                    triplets++;
                    cout<<arr[i]<<" ,"<<arr[j]<<" ,"<<arr[k]<<endl;
                }
            }
        }
    }
    cout<<"\nTotal "<<triplets<<" Pairs are possible"<<endl;
    return 0;
}