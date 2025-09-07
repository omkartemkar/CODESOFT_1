#include <iostream>
#include <cstdlib>  
#include <ctime> 
using namespace std;
int main() {
    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0;

    cout << "I have generated a number between 1 and 100.\n";
    cout << "Can you guess it?\n";

    // Loop until user guesses correctly
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        if (userGuess > numberToGuess) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number: " << numberToGuess << endl;
        }
    } while (userGuess != numberToGuess);
    return 0;
}
