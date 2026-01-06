#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=10; i++){
        if(i==5){
            cout<<"Skipping number 5"<<endl;
            continue; // Skip the rest of the loop when i is 5
        }
        if(i==8){
            cout<<"Breaking the loop at number 8"<<endl;
            break; // Exit the loop when i is 8
        }
        cout<<i<<endl; // Print the current number
    }
    return 0;
}