#include <iostream>
#include <cstdlib>  // Headerfile for rand() and srand()
#include <ctime>    // Headerfile for time()

using namespace std;

int main() {
    int numbertoguess, userguess, attempts;
    char playagain;

    //  random number generator  at the start
    srand(time(0));

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        // Generate a random number between 1 and 100
        numbertoguess = rand() % 100 + 1;
        attempts = 0;

        cout << "\nI've picked a number between 1 and 100. Can you guess it?" << endl;

        // Start guessing loop
        do {
            cout << "Enter your guess: ";
            cin >> userguess;

            // Input validation
            if (cin.fail()) {
                cin.clear(); // clear the error
                cin.ignore(1000, '\n'); // for invalid input
                cout << "Please enter a valid number!" << endl;
                continue;
            }

            attempts++;

            if (userguess > numbertoguess) {
                cout << "Too high!Try again.\n";
            } else if (userguess < numbertoguess) {
                cout << "Too low!Try again.\n";
            } else {
                cout << "Correct! You guessed it in " << attempts << " attempt(s).\n";
            }

        } while (userguess != numbertoguess);

        // Ask the user if they want to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playagain;

    } while (playagain == 'y' || playagain == 'Y');

    cout << "Thanks for playing!See you next time!\n";
    return 0;
}

