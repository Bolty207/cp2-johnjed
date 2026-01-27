// Task 5 Mutiplication Table
#include <iostream>
using namespace std;

int main() {
    
    int grid [5][5];
    
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) { 
            grid[i][j] = i * j;
        }    
    }
    
    cout << "5x5 Multiplication Table:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << grid [i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}