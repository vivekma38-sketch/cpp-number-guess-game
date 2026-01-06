#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";//prompt user for input
    cin>>ch;//read input
    if(ch>='a' && ch<='z')
        cout<<"Lowercase letter."<<endl;
    else if(ch>='A' && ch<='Z')
        cout<<"Uppercase letter."<<endl;
    else
        cout<<"Not an alphabet."<<endl;

    return 0;
}