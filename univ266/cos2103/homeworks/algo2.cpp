#include <iostream>

using namespace std;

int main() {
    int n, pos, ele;
    cout << "Array : ";cin >> n;
    cout << "Position: ";cin >> pos;
    cout << "knew data : ";cin >> ele;

    // Validate if position is within array bounds
    int size = 20;
    int LA[size] = {1, 5, 6, 4, 9};

    while (LA[size] > pos){
      LA[size] = LA[size-1];
      n--;
    }
    LA[pos] = ele;
    n++;

    cout << "New array at " << pos << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;

    return 0;
}
