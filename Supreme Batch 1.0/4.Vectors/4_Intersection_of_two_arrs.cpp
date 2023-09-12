#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int arr[]={1,2,3,3,4};
    int brr[]={3,3,4,9,10};
    vector <int> inter;
    vector <int> uni;
    for(int i:arr){
        for(int j: brr){
            if(i==j){
                // j=INT64_MIN;
                inter.push_back(i);
                break;
            }
        }
    }
    cout<<"The intersection of the two arrays is:"<<endl;
    for(int i:inter){
        cout<<i<<" ";
    }
    for(int i :arr){
        uni.push_back(i);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i]==brr[j]){
                brr[j]=-1;
            }
        }
    }
    for(int i=0;i<5;i++){
        if(brr[i]!=-1){
            uni.push_back(brr[i]);
        }
    }
    cout<<"\nThe union of the two arrays is:"<<endl;
    for(int i:uni){
        cout<<i<<" ";
    }


    return 0;
}