#include <iostream>
using namespace std;

// Function to check the PIN
bool checkPIN() {
    const int correctPIN = 1234;
    int enteredPIN;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter your PIN: ";
        cin >> enteredPIN;

        if (enteredPIN == correctPIN) {
            return true;
        } else {
            attempts++;
            cout << "Incorrect PIN. ";
            if (attempts < 3) {
                cout << "Try again.\n";
            }
        }
    }
    cout << "Too many incorrect attempts. Access denied.\n";
    return false;
}

// Function to handle withdrawals
void withdraw(double &balance) {
    double amount;
    char choice;

    do {
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: KSh. " << balance << endl;
        } else {
            cout << "Insufficient funds. Your current balance is KSh. " << balance << endl;
        }

        // Ask the user if they want to withdraw again
        cout << "Do you want to make another withdrawal? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}

int main() {
    const double initialBalance = 10000;
    double balance = initialBalance;

    // Check PIN before proceeding
    if (checkPIN()) {
        // If PIN is correct, proceed to withdrawal
        withdraw(balance);
    }

    cout << "Thank you for using the banking system. Goodbye!\n";
    return 0;
}

