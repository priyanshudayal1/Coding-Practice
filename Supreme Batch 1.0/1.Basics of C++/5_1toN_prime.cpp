#include<iostream>
using namespace std;

int checkPrime(int n){
    int fact=0;
    for (int i=2;i<n;i++){
        if (n%i==0){
            fact++;
        }

    }
    if(fact==0){
        return n;
    }
    else{
        return -1;

    }
}


int main()
{
    int n;
    cout<<"Enter the Nth term:";
    cin>>n;
    for (int i=1;i<=n;i++){
        int check=checkPrime(i);
        if(check!=-1){
            cout<<i<<endl;
            
        }

    }
     return 0;
}