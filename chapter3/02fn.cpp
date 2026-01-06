#include<iostream>
using namespace std;
int printhello(){
    cout<<"Hello vivek\n";
    return 3;
}int main(){
    int n;
    cout<<"enter no n: ";
    cin>>n;
    for(int i=0;i<n;i++){
    int val=printhello();
    cout<<"value returned is "<<val<<endl;
    }
    return 0;
}