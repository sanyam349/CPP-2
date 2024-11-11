#include <iostream>
using namespace std;

class PrimeChecker {
public:
    bool isPrime(int num);
};

bool PrimeChecker::isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    PrimeChecker pc;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (pc.isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;
    return 0;
}
