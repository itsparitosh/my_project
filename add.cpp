#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the two numbers and their sum
    int firstNumber, secondNumber, sum;

    // Prompt the user to enter two integers
    cout << "Enter two integers: ";

    // Read the two integers from the user's input
    cin >> firstNumber >> secondNumber;

    // Calculate the sum of the two numbers using the + operator
    sum = firstNumber + secondNumber;

    // Display the result
    cout << firstNumber << " + " << secondNumber << " = " << sum << endl;

    return 0; // Return 0 to indicate successful program execution
}
