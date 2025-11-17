// Algorithm Challenge
// 37  Sum Until -99
// This program keeps reading numbers from the user and sums them. It stops when the user enters -99

#include <iostream>
using namespace std;

int main()
{
    int num;     // Stores the current number entered by the user
    int sum = 0; // Stores the running total

    cout << "Keep typing numbers. Enter -99 to stop and see the sum.\n";

    // Read the first number
    cin >> num;

    // Keep summing until the user enters -99
    while (num != -99)
    {
        sum += num; // Add the entered number to the sum
        cin >> num; // Read the next number
    }

    // Output the total sum
    cout << "Total Sum: " << sum;

    return 0;
}
