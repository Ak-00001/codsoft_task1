#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    
    srand(static_cast<unsigned>(time(nullptr)));
    int secretNumber = rand() % 100 + 1;
    
    int attempts = 0;
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've selected a random number between 1 and 100. Try to guess it." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
