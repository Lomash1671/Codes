#include <iostream>

int main() {
    int lion_count = 0; // Initializes to zero
    int dog_count = 10; // Initializes to 10
    int cat_count = 15; // Initializes to 15

    int domesticated_animals = dog_count + cat_count; // Sum of dog and cat count

    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animals count: " << domesticated_animals << std::endl;

    return 0;
}
