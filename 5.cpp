#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[]) {
    double side;
    if (!(std::cin >> side)) return 0;

    // ���D�V�d�����]�Ψ����U�O�� round ����k�^
    double area = std::round(side * side * 10.0) / 10.0;

    std::cout << std::fixed << std::setprecision(1)
              << area << '\n';
    return 0;
}
