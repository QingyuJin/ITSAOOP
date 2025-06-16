#include <iostream>

int main() {
    int x, y;
    if (!(std::cin >> x >> y)) return 0;

    if (x > 0 && y > 0) {
        std::cout << "1st Quadrant\n";
    } else if (x < 0 && y > 0) {
        std::cout << "2nd Quadrant\n";
    } else if (x < 0 && y < 0) {
        std::cout << "3rd Quadrant\n";
    } else if (x > 0 && y < 0) {
        std::cout << "4th Quadrant\n";
    } else if (x == 0 && y != 0) {
        std::cout << "y-axis\n";
    } else if (y == 0 && x != 0) {
        std::cout << "x-axis\n";
    } else {  // x == 0 && y == 0
        std::cout << "Origin\n";
    }

    return 0;
}
