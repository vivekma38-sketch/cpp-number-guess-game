#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }return factorial;
}int main(){
    int n;
    cout<<"enter no n: ";
    cin>>n;
    int f=fact(n);
    cout<<"factorial is: "<<f<<endl;
    return 0;
}