#include <iostream>
using namespace std;

void func(int i, int n) {
    // Base condition
    if (i > n) return;

    // Print the current number
    cout << i << endl;

    // Recursive call with incremented value
    func(i + 1, n);
}

int main() {
    // Input value of n
    int n = 4;

    // Start the recursive function from 1
    func(1, n);
    return 0;
}
