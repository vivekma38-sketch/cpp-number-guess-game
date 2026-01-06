#include<iostream>
using namespace std;
int sum(int a,int b){//parameterized function,parameters are a and b
    return a+b;
}int minofTwo(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int m,n;
    cout<<"enter two no: "; 
    cin>>m>>n;
    int s=sum(m,n);//arguments are m and n
    cout<<"sum is: "<<s<<endl; 
    int mi=minofTwo(m,n);
    cout<<"minimum is: "<<mi<<endl; 
}