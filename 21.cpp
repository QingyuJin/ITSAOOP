#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    if (n <= 0 || n >= 20) {
        std::cout << "Input out of range\n";
        return 1;
    }

    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }

    std::cout << fact << '\n';
    return 0;
}
