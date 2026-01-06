#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"Sum of numbers from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}