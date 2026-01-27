// Task 4 Map Printer
#include <iostream>
using namespace std;

int main () {

    int grid [3][3] = {0};

    cout << "3x3 Grid:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}