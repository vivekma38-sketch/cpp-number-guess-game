#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int min = (a < b) ? a : b;
    cout << "The minimum of " << a << " and " << b << " is " << min << endl;
    return 0;
}