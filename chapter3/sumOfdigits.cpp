#include<iostream>
using namespace std;
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}int main(){
    int n;  
    cout<<"enter no n: ";
    cin>>n;
    int s=sumOfDigits(n);
    cout<<"sum of digits is: "<<s<<endl;
    return 0;
}    