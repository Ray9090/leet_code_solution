#include <iostream>
using namespace std;

int main() {
    int num, temp, digit, reversed = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Store the original number in a temporary variable
    temp = num;

    // Reverse the digits of the number
    while (temp != 0) {
        digit = temp % 10; // Get the last digit of the number
        reversed = (reversed * 10) + digit; // Add the digit to the reversed number
        temp /= 10; // Remove the last digit from the original number
    }

    // Check if the reversed number is equal to the original number
    if ((num != reversed) || (num < 0)) {
        cout << "The number " << num << " is not a palindrome." << endl;
    }
    else {
        cout << "The number " << num << " is a palindrome!" << endl;
    }

    return 0;
}
