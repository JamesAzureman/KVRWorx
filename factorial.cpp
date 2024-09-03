#include <iostream>

using namespace std;

unsigned long factorial(unsigned long n) {
    unsigned long result {n};
    if (result < 0) return result;
    for (int i = n - 1; i > 1; i--) {
        result *= i;
    }
    return result;
}

int main()
{
    auto x = factorial(10);
    cout << x << endl;
    return 0;
}
