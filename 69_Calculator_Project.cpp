#include <iostream>
#include <map>
#include <functional>

using namespace std;

// Define operation functions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }

int main() {
    // Create a map to store operations
    map<char, std::function<double(double, double)>> operations;

    // Assign operations to map
    operations['+'] = add;
    operations['-'] = subtract;
    operations['*'] = multiply;
    operations['/'] = divide;

    // Example usage
    char operation;
    double num1, num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Check if the operation is valid
    if (operations.find(operation) != operations.end()) {
        double result = operations[operation](num1, num2);
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}
