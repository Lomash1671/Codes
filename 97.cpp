//STRING MANIPULATION 2
#include<iostream>
#include<string>
using namespace std;
int main() {

  string str = "Hello, World!";

  size_t pos = str.find("World");

  if (pos != string::npos) {

    cout << "'World' found at position: " << pos <<endl;

  } else {

    cout << "'World' not found." << endl;

  }

  return 0;
}