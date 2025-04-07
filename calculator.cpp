#include <iostream>
using namespace std;

double subtract(double a, double b) {
    return a - b;
}

int main() {
    double num1, num2;

    cout << "=== Subtraction Function ===" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double result = subtract(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}
