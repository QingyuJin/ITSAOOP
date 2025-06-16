#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    int square = n * n;
    int cube   = n * n * n;

    std::cout << n << ' '
              << square << ' '
              << cube << '\n';

    return 0;
}
