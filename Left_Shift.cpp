#include <iostream>
using namespace std;

void Shift(int A[], int n, int k) {
    for (int j = 1; j <= k; ++j) {
        for (int i = 1; i < n; ++i) {
            A[i - 1] = A[i];
        }
    }

    for (int i = n - k; i < n; ++i) {
        A[i] = 0;
    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Shift(arr, size, k);

    cout << "Array after left shift of " << k << " elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

