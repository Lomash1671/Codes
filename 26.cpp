#include <iostream>
using namespace std;
int main() {
    int car_count = 0;
    int bike_count = 0;
    int rikshaw_count = 0;
    int choice;
    do {
        cout << "1. Park Car" << endl;
        cout << "2. Park Bike" << endl;
        cout << "3. Park Rikshaw" << endl;
        cout << "4. Exit" << endl;
        cout << "5. Do you want to go again" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Car parked." << endl;
                car_count++;
                break;
            case 2:
                cout << "Bike parked." << endl;
                bike_count++;
                break;
            case 3:
                cout << "Rikshaw parked." << endl;
                rikshaw_count++;
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice! Please enter again." << endl;
        }
    } while (choice != 4);
    cout << "Total vehicles parked:" << endl;
    cout << "Cars: " << car_count << endl;
    cout << "Bikes: " << bike_count << endl;
    cout << "Rikshaws: " << rikshaw_count << endl;
    return 0;
}
