#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks obtained: ";//prompt user for input
    cin>>n;//read input
    if(n>=90 && n<=100){
        cout<<"Grade A"<<endl;
    }else if(n>=80 && n<90){
        cout<<"Grade B"<<endl;
    }else{
        cout<<"Grade C"<<endl;
    }
    return 0;
}