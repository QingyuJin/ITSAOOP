#include <iostream>

int main() {
    int y;
    if (!(std::cin >> y)) return 0;

    // �P�_�|�~�G��Q4�㰣�A�B�]��Q400�㰣 �� ����Q100�㰣�^
    if (y % 4 == 0 && (y % 400 == 0 || y % 100 != 0)) {
        std::cout << "Bissextile Year\n";
    } else {
        std::cout << "Common Year\n";
    }

    return 0;
}
