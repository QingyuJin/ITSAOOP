#include <iostream>

int main() {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;

    int sum = a + b;
    std::cout << (sum * sum) << '\n';

    return 0;
}
