// Task 3 Even/Odd Counter 
#include <iostream>
using namespace std;

int main() {
    int numbers [10]; 
    int evenCount = 0, oddCount = 0;


    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[1];
        if (numbers[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;
            }
        }
    

    cout << "Total even numbers: " << evenCount << endl;
    cout << "Total odd numbers: " << oddCount << endl;

    return 0;
}
 