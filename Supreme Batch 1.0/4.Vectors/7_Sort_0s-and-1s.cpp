#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector <int> arr{0,1,1,0,1,0,1,0,0};
    int s=0,e=(arr.size()-1);
    while(s<=e){
        if(arr[s]==1 && arr[e]==0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else if(arr[s]==0){
            s++;
        }
        else if(arr[e]==1){
            e--;
        }
        // else if(arr[s]==0 && arr[e]==0){
        //     s++;
        // }
        // else if(arr[s]==0 && arr[e]==1){
        //     e--; 
        // }
    }
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}