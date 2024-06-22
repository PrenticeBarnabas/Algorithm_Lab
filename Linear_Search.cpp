#include <iostream>
using namespace std;

int Search(int A[], int n, int num) {
    for (int i = 0; i < n; ++i) {
        if (A[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    int num;
    cout << "Enter the item to search: ";
    cin >> num;

    int result = Search(A, n, num);
    if (result != -1) {
        cout << "Searched number found at index: " << result << endl;
    } else {
        cout << "Searched number not found in the array." << endl;
    }

    return 0;
}

