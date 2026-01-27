// Task 2 Summation Machine
#include <iostream>
using namespace std;

int main() {
    int arr [5];
    int total = 0;

for (int i = 0; i < 5; i++) {
    cout << "Enter integer " << (i + 1) << ": ";
    cin >> arr[i];
    total += arr[i];
}

cout << "The total sum of all items: " << total << endl;
return 0;
}
