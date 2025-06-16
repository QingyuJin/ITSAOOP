#include <iostream>

int main() {
    int x, y;
    if (!(std::cin >> x >> y)) return 0;

    const int radius = 100;
    int distance_squared = x * x + y * y;

    if (distance_squared <= radius * radius) {
        std::cout << "inside\n";
    } else {
        std::cout << "outside\n";
    }

    return 0;
}
