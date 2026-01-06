#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int ans=0;
    int pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans=ans+rem*pow;
        pow=pow*10;
    }
    return ans;
}int main(){
    int decNum;
    cout<<"enter a decimal number: ";
    cin>>decNum;
    int binaryNum=decToBinary(decNum);
    cout<<"binary equivalent is: "<<binaryNum<<endl;
}