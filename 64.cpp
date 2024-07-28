#include <iostream>
#include <string>
using namespace std;


// Function to check if a character is a digit
bool isDigit(char c) {
    return c >= '0' && c <= '9';
}


// Function to process the string and count digits
void countDigits(const string &input, int digitCount[]) {
    // Lambda to increment count of a digit in the array
    auto incrementCount = [&digitCount](char c) {
        if (isDigit(c)) {
            digitCount[c - '0']++;
        }
    };


    // Iterate through each character in the string
    for (char c : input) {
        incrementCount(c);
    }
}


// Function to print the counts of digits appearing more than once
void printDuplicateCounts(int digitCount[]) {
    for (int i = 0; i < 10; ++i) {
        if (digitCount[i] > 1) {
            cout << "Number " << i << " is " << digitCount[i] << " times" << endl;
        }
    }
}


int main() {
    string input = "john12Doe14@gmail18.com8";
    int digitCount[10] = {0};


    // Count the digits in the string
    countDigits(input, digitCount);


    // Print out the counts of each digit that appears more than once
    printDuplicateCounts(digitCount);


    return 0;
}
