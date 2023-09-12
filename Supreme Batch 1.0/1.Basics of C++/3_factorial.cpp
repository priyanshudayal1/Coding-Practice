#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int fact=1;
    for (int i=0;i<n;i++){
        fact=fact*(i+1);

    }
    cout<<"The factorial of the number is :"<<fact<<endl;
     return 0;
}
