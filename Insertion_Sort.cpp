#include <iostream>
using namespace std;

void Sort(int A[], int n) {
    for (int j = 1; j < n; ++j) {
        int value = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] > value) {
            swap(A[i], A[i + 1]);
            i--;
        }
        A[i + 1] = value;
    }
}

int main() {

    int arr[] = {30, 10, 50, 20, 40};
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

