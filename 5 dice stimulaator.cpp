#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to simulate rolling a die
int rollDie() {
    return rand() % 6 + 1;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    char rollAgain;

    do {
        // Simulate rolling two dice
        int die1 = rollDie();
        int die2 = rollDie();

        // Print the results
        cout << "Die 1: " << die1 << endl;
        cout << "Die 2: " << die2 << endl;
        cout << "Total: " << die1 + die2 << endl;

        // Ask the user if they want to roll again
        cout << "Roll again? (y/n): ";
        cin >> rollAgain;

    } while (rollAgain == 'y' || rollAgain == 'Y');

    cout << "Goodbye!" << endl;

    return 0;
}

