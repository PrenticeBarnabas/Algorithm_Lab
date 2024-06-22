#include <iostream>
using namespace std;

void SumList(int A[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum+= A[i];
    }
    cout << "Sum of the elements: " << sum << endl;
}

int main() {

    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    SumList(arr, size);

    return 0;
}

