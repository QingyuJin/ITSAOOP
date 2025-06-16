#include <iostream>

int main() {
    int x, y;
    if (!(std::cin >> x >> y)) return 0;

    if (x >= 0 && x <= 100 && y >= 0 && y <= 100) {
        std::cout << "inside\n";
    } else {
        std::cout << "outside\n";
    }

    return 0;
}
