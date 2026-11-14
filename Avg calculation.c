#include <iostream>

int main() {
    int count;
    double number, sum = 0.0;

    // Ask how many numbers the user wants to average
    std::cout << "How many numbers do you want to average? ";
    std::cin >> count;

    // Prevent division by zero
    if (count <= 0) {
        std::cout << "Please enter a valid number greater than 0." << std::endl;
        return 1;
    }

    // Loop to read each number and add it to the sum
    for (int i = 1; i <= count; ++i) {
        std::cout << "Enter number " << i << ": ";
        std::cin >> number;
        sum += number;
    }

    // Calculate and display the average
    double average = sum / count;
    std::cout << "The average is: " << average << std::endl;

    return 0;
}
