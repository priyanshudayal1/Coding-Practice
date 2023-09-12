#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int factors=0;
    for (int i=2;i<n;i++){
        if (n%i==0){
            factors++;
        }
    }
    if(factors==0){
        cout<<"The given number is a prime number.";
    }
    else{
        cout<<"The given number is not a prime number.";
    }
     return 0;
}