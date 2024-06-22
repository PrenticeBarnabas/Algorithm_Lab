#include <iostream>
using namespace std;

void Rotate(int A[], int n, int k) {
    for (int j = 1; j <= k; ++j) {
        int temp = A[0];
        for (int i = 1; i < n; ++i) {
            A[i - 1] = A[i];
        }
        A[n - 1] = temp;
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

    Rotate(arr, size, k);

    cout << "Array after left rotation of " << k << " elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

