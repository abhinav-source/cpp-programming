#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void createFile(const string& filename) {
    ofstream file(filename.c_str());

    if (file.is_open()) {
        cout << "File created successfully: " << filename << endl;
        file.close();
    } else {
        cerr << "Error creating file: " << filename << endl;
    }
}

void readFile(const string& filename) {
    ifstream file(filename.c_str());

    if (file.is_open()) {
        string line;
        cout << "File content (" << filename << "):" << endl;

        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    } else {
        cerr << "Error reading file: " << filename << endl;
    }
}

void updateFile(const string& filename, const string& content) {
    ofstream file(filename.c_str(), ios::app);

    if (file.is_open()) {
        file << content << endl;
        cout << "File updated successfully: " << filename << endl;
        file.close();
    } else {
        cerr << "Error updating file: " << filename << endl;
    }
}

void deleteFile(const string& filename) {
    if (remove(filename.c_str()) == 0) {
        cout << "File deleted successfully: " << filename << endl;
    } else {
        cerr << "Error deleting file: " << filename << endl;
    }
}

int main() {
    int choice;
    string filename, content;

    while (true) {
        cout << "File Management System" << endl;
        cout << "1. Create File" << endl;
        cout << "2. Read File" << endl;
        cout << "3. Update File" << endl;
        cout << "4. Delete File" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the filename: ";
                cin.ignore();
                getline(cin, filename);
                createFile(filename);
                break;

            case 2:
                cout << "Enter the filename to read: ";
                cin.ignore();
                getline(cin, filename);
                readFile(filename);
                break;

            case 3:
                cout << "Enter the filename to update: ";
                cin.ignore();
                getline(cin, filename);
                cout << "Enter content to write to the file: ";
                getline(cin, content);
                updateFile(filename, content);
                break;

            case 4:
                cout << "Enter the filename to delete: ";
                cin.ignore();
                getline(cin, filename);
                deleteFile(filename);
                break;

            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
                break;
        }
    }

    return 0;
}

