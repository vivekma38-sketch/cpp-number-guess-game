#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)time(0));
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while(userGuess != numberToGuess){
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if(userGuess < numberToGuess){
            cout << "It's low! Try High number please." << endl;
        } else if(userGuess > numberToGuess){
            cout << "It's high! Try Low number please." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << numberToGuess << " in " << attempts << " attempts." << endl;
        }
    }

    return 0;
}
