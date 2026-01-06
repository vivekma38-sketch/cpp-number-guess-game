#include<iostream>
using namespace std;
int sumtillN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }return sum;

}int main(){
    int n;
    cout<<"enter no n: ";
    cin>>n;
    int s=sumtillN(n);
    cout<<"sum till n is: "<<s<<endl;
    return 0;
}