#include<iostream>
using namespace std;
int main()
{
    int ans=-1,n;
    int arr[]={2,9,6,7,4,12,15};
    cout<<"Enter the element to be searched:";
    cin>>n;
    for(int i=0;i<7;i++){
        if(arr[i]==n){
            ans=i;
        }

    }
    if(ans!=-1){
        cout<<"\nThe element found at the index : "<<ans;
    }
    else{
        cout<<"The element not found";
    }
     return 0;
}