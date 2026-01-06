#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";//prompt user for inputVV
    cin>>ch;//read input
    if(ch>='a' && ch<='z'){
        char upper=ch-32;
        cout<<"Uppercase letter is: "<<upper<<endl;
    }else if(ch>='A' && ch<='Z'){
        char lower=ch+32;
        cout<<"Lowercase letter is: "<<lower<<endl;
    }else{
        cout<<"Not an alphabet."<<endl;
    }
    return 0;
}