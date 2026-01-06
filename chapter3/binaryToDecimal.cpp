#include<iostream>
using namespace std;
int binTODec(int binNum){
    int ans=0;
    int pow=1;
    while(binNum>0){
        int lastDigit=binNum%10;
        binNum=binNum/10;
        ans=ans+lastDigit*pow;
        pow=pow*2;
    }
    return ans;
}int main(){
    int binNum;
    cout<<"enter a binary number: ";
    cin>>binNum;
    int decNum=binTODec(binNum);
    cout<<"decimal equivalent is: "<<decNum<<endl;  
    return 0;  
}