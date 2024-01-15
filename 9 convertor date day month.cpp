#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

// Function to convert DD/MM/YYYY to MM/DD/YYYY
string convertDDMMYYYY(const string& date) {
    stringstream ss(date);
    int day, month, year;
    char delimiter;

    ss >> day >> delimiter >> month >> delimiter >> year;

    stringstream result;
    result << setw(2) << setfill('0') << month << '/';
    result << setw(2) << setfill('0') << day << '/';
    result << year;

    return result.str();
}

// Function to convert MM/DD/YYYY to DD/MM/YYYY
string convertMMDDYYYY(const string& date) {
    stringstream ss(date);
    int month, day, year;
    char delimiter;

    ss >> month >> delimiter >> day >> delimiter >> year;

    stringstream result;
    result << setw(2) << setfill('0') << day << '/';
    result << setw(2) << setfill('0') << month << '/';
    result << year;

    return result.str();
}

// Function to convert YYYY/MM/DD to DD/MM/YYYY
string convertYYYYMMDD(const string& date) {
    stringstream ss(date);
    int year, month, day;
    char delimiter;

    ss >> year >> delimiter >> month >> delimiter >> day;

    stringstream result;
    result << setw(2) << setfill('0') << day << '/';
    result << setw(2) << setfill('0') << month << '/';
    result << year;

    return result.str();
}

int main() {
    int choice;
    string inputDate, convertedDate;

    cout << "Date Format Converter" << endl;
    cout << "Enter the date in any of the formats (DD/MM/YYYY, MM/DD/YYYY, YYYY/MM/DD): ";
    getline(cin, inputDate);

    cout << "Choose the conversion format:" << endl;
    cout << "1. Convert to MM/DD/YYYY" << endl;
    cout << "2. Convert to DD/MM/YYYY" << endl;
    cout << "3. Convert to YYYY/MM/DD" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            convertedDate = convertDDMMYYYY(inputDate);
            break;
        case 2:
            convertedDate = convertMMDDYYYY(inputDate);
            break;
        case 3:
            convertedDate = convertYYYYMMDD(inputDate);
            break;
        default:
            cout << "Invalid choice. Exiting program." << endl;
            return 1;
    }

    cout << "Converted Date: " << convertedDate << endl;

    return 0;
}

