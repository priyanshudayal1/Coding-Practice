#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int e;
    int A[]={1,3,5,7,9};
    int B[]={2,4,6,8};
    vector <int> ans;
    for(int i=0;i<5;i++){
        ans.push_back(A[i]);
    }
    for(int i=0;i<4;i++){
        ans.push_back(B[i]);
    }
    cout<<"\nThe union of the two arrays is:"<<endl;
    // for(int i;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}