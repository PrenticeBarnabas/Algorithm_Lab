#include <iostream>
using namespace std;

int fac(int n) {
    if (n <= 0)
        return 1;
    else
        return n * fac(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << fac(num) << endl;
    return 0;
}

