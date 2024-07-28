// STRING 1
#include <iostream>

#include <string>

#include<set>

using namespace std;

int main() {

  string str = "Hello, World!";

  cout << "Length: " << str.length() << endl;

  cout << "Size: " << str.size() <<endl;

  //insert

   str.insert(7, "World");

  cout << "Inserted string: " << str <<endl;

 return 0;

 //erase

 str.erase(5, 7); // Erase ", World"

  cout << "Erased string: " << str <<endl;
}