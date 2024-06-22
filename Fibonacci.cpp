#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibo(n);
    return 0;
}

