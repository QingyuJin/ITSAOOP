#include <iostream>

int main() {
    int m;
    if (!(std::cin >> m)) return 0;

    if ((m >= 1 && m <= 2) || m == 12) {
        std::cout << "Winter\n";
    } else if (m >= 3 && m <= 5) {
        std::cout << "Spring\n";
    } else if (m >= 6 && m <= 8) {
        std::cout << "Summer\n";
    } else if (m >= 9 && m <= 11) {
        std::cout << "Autumn\n";
    } else {
        std::cout << "Invalid month\n";
    }

    return 0;
}
