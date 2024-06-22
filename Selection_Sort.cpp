#include <iostream>
using namespace std;

void Sort(int A[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int x = i;
        for (int j = i + 1; j < n; ++j) {
            if (A[j] < A[x]) {
                x = j;
            }
        }
        swap(A[x], A[i]);
    }
}

int main() {

    int arr[] = {80, 70, 50, 30, 20, 60, 90, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

