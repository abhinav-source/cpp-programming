#include <iostream>

using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0/9.0;
}

int main() {
    char choice;
    double temperature;

    cout << "Temperature Converter" << endl;
    cout << "Choose conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;

    cin >> choice;

    switch (choice) {
        case '1':
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit." << endl;
            break;
        
        case '2':
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius." << endl;
            break;

        default:
            cout << "Invalid choice. Please choose 1 or 2." << endl;
            break;
    }

    return 0;
}













