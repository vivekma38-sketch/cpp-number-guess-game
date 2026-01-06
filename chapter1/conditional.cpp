//if ,elif,else are used for multiple conditions
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: "; // prompt user for input
    cin >> number; // read input

    // check if the number is positive, negative, or zero
    if (number > 0) {
        cout << "The number is positive." << endl; // output for positive number
    } 
    else if (number < 0) {
        cout << "The number is negative." << endl; // output for negative number
    } 
    else {
        cout << "The number is zero." << endl; // output for zero
    }

    return 0;
}