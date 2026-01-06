#include<iostream>
using namespace std;
int main(){
    int n,table;
    cout<<"Enter the value n: ";
    cin>>n;
    cout<<"Multiplication table of "<<n<<" is:"<<std::endl;
    for(int i=1;i<=10;i++){
        table=i*n;
        cout<<n<<" x "<<i<<" = "<<table<<endl;
    }
    return 0;
}