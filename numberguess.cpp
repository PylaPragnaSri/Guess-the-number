#include<iostream.h>
#include<cstdlib.h>  // this header file is used for rand() and srand()
#include<ctime.h>    // this header file is used for time()

using namespace std;

int main() {
    int number, guess, attempts = 0;
    char playagain;

    // Seed the random number generator
    srand(time(0));

    do {
        number = rand() % 100 + 1; // random number between 1 and 100 is choosen by the computer
        attempts = 0;

        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I'm thinking of a number between 1 and 100..." << endl;

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > number) {
                cout << "The number is greater than what you guessed. Please try again.\n";
            } else if (guess < number) {
                cout << "The number is lesser than what you guessed. Please try again.\n";
            } else {
                cout << "Correct! You guessed it in " << attempts << " tries.\n";
            }

        } while (guess != number);

        cout << "Do you want to play again? (y/n): ";
        cin >> playagain;

    } while (playagain == 'y' || playagain == 'Y');

    cout << "Thanks for playing!" << endl;
    return 0;
}
