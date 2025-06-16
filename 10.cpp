#include <iostream>
#include <iomanip>

int main() {
    double c;
    if (!(std::cin >> c)) return 0;

    double f = c * 9.0 / 5.0 + 32.0;

    std::cout << std::fixed << std::setprecision(1)
              << f << '\n';
    return 0;
}
