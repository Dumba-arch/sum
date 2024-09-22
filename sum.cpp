#include <iostream>
using namespace std;

int main() {
    double sum = 0.0; // Variable to hold the sum of the series

    for (int i = 1; i <= 95; i += 2) { // Loop through odd numbers from 1 to 95
        sum += (i * 1.0) / (i + 2); // Multiply by 1.0 to ensure floating-point division
    }
    
    cout << "The sum of the series is: " << sum << endl; // Output the result
    return 0;
}


