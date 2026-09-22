// Problem: Create a number guessing game with a fixed secret number.
// Topic: while loop, if-else
// Difficulty: Intermediate
// Approach: Repeatedly take guesses and compare them with the secret number until the correct number is guessed.

#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7;
    int guess;
    cout << "Guess the number (1-10): ";
    cin >> guess;
    if (guess == secretNumber) {
        cout << "Congratulations! You guessed it right." << endl;
    } else {
        cout << "Sorry, that's not the correct number." << endl;
    }
    return 0;
}
