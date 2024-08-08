#include <iostream>
using std::cout;
using std::cin;

int lastDigitFibonacciFast(int n) {
    if (n <= 1) {
        return n;
    }
    
    int previous = 0;
    int current = 1;
    int next;
    
    for (int i = 2; i <= n; ++i) {
        next = (previous + current) % 10;
        previous = current;
        current = next;
    }
    
    return current;
}

int main() {
    int total;
    cin >> total;
    
    if (total <= 0) {
        cout << "0\n";
        return 0;
    }
    
    cout << lastDigitFibonacciFast(total) << "\n";
    
    return 0;
}
