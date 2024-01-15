#include <iostream>
#include <chrono>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace chrono;

// Function to generate random text for typing test
string generateRandomText(int length) {
    const string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string randomText;

    for (int i = 0; i < length; ++i) {
        randomText += alphabet[rand() % alphabet.length()];
    }

    return randomText;
}

// Function to calculate accuracy
double calculateAccuracy(const string& originalText, const string& typedText) {
    int correctChars = 0;
    int totalChars = originalText.length();

    for (int i = 0; i < totalChars; ++i) {
        if (originalText[i] == typedText[i]) {
            correctChars++;
        }
    }

    return static_cast<double>(correctChars) / totalChars * 100.0;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    const int textLength = 50; // Adjust the length of the text as needed
    const string originalText = generateRandomText(textLength);

    cout << "Typing Tester" << endl;
    cout << "Type the following text as fast as you can:\n" << originalText << endl;

    // Record the start time
    auto startTime = high_resolution_clock::now();

    // Get user input
    string typedText;
    getline(cin, typedText);

    // Record the end time
    auto endTime = high_resolution_clock::now();

    // Calculate the duration and accuracy
    auto duration = duration_cast<seconds>(endTime - startTime);
    double accuracy = calculateAccuracy(originalText, typedText);

    cout << "Time taken: " << duration.count() << " seconds" << endl;
    cout << "Accuracy: " << accuracy << "%" << endl;

    return 0;
}

