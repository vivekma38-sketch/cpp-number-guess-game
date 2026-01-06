#include<iostream>
using namespace std;
int main(){
    int number, sum = 0;
    do {
        cout << "Enter a positive integer (negative to stop): ";
        cin >> number;
        if (number >= 0) {
            sum += number; // Add to sum if the number is non-negative
        }
    } while (number >= 0); // Continue until a negative number is entered

    cout << "The total sum of positive integers is: " << sum << endl;
    return 0;
}