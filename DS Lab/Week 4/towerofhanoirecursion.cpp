#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char source, char target, char auxiliary) {
    if (n > 0) {
        TowerOfHanoi(n - 1, source, auxiliary, target);
        cout << "Move disk " << n << " from " << source << " to " << target << std::endl;
        TowerOfHanoi(n - 1, auxiliary, target, source);
    }
}

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    TowerOfHanoi(numDisks, 'A', 'C', 'B');

    return 0;
}
