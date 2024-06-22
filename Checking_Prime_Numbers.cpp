#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (IsPrime(number)) {
        cout << number << " is a prime number.";
    } else {
        cout << number << " is not a prime number.";
    }

    return 0;
}

