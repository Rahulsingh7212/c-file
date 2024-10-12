#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct User {
    string username;
    string password;   
};

void registerUser() {
    User user;
    cout << "Enter username: ";
    cin >> user.username;
    cout << "Enter password: ";
    cin >> user.password;

    ofstream file("users.txt", ios::app);
    if (file.is_open()) {
        file << user.username << " " << user.password << endl;
        file.close();
        cout << "Registration successful!" << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }
}

int main() {
    int choice;
    cout << "1. Register\n2. Exit\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            registerUser();
            break;
        case 2:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
