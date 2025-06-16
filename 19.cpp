#include <iostream>
#include <iomanip>

int main() {
    int min;
    if (!(std::cin >> min)) return 0;

    double cost = 0.0;
    if (min <= 800) {
        cost = min * 0.9;
    } else if (min < 1500) {
        cost = min * 0.9 * 0.9;
    } else {
        cost = min * 0.9 * 0.79;
    }

    std::cout << std::fixed << std::setprecision(1)
              << cost << '\n';
    return 0;
}
