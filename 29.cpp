#include <iostream>

// ¿À¨dΩËº∆
bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    for (int i = n - 1; i > 1; --i) {
        if (is_prime(i)) {
            std::cout << i << '\n';
            break;
        }
    }
    return 0;
}
