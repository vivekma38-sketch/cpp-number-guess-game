#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";//prompt user for input
    cin>>n;//read input
    int i=1;//initialize counter
    while(i<=n){//loop until counter exceeds n
        cout<<i<<endl;//output current iteration
        i++;//increment counter
    }
    return 0;
}