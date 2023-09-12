#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int un=0;
    vector <int> arr{2,1,3,4,2,1,4};
    for(int i=0;i<arr.size();i++ ){
        un=un^arr[i];
    }
    cout<<"The unique element in the array is :"<<un;
     return 0;
}