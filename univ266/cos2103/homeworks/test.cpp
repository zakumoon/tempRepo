#include <iostream>
using namespace std;

int main() {
    int n, pos, ele;
    cout << "Array Size: ";
    cin >> n;
    cout << "Position to Insert: ";
    cin >> pos;
    cout << "New Data: ";
    cin >> ele;

    int LA[100] = {1, 5, 6, 4, 9};

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;

    while (n > pos) {
        LA[n] = LA[n - 1];
        n--;
    }
    LA[pos] = ele;
    n++;

    cout << "New Array after inserting " << ele << " at position " << pos << ": ";
    for (int i = 0; i < n; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;

    return 0;
}
