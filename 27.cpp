#include <iostream>

int main() {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;

    if (a > b) {
        std::swap(a, b);
    }

    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }

    std::cout << sum << '\n';
    return 0;
}
