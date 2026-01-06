#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter an integer: ";//prompt user for input
    cin>>n;
    //using ternary operator to check if n is even or odd 
    string result = (n % 2 == 0) ? "Even" : "Odd";
    cout<<"The number is: "<<result<<endl;
    return 0;
}