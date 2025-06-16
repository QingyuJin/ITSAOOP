#include <iostream>

int main(int argc, char* argv[]) {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;

    std::cout << a << "+" << b << "=" << (a + b) << '\n';
    std::cout << a << "*" << b << "=" << (a * b) << '\n';
    std::cout << a << "-" << b << "=" << (a - b) << '\n';

    if (a < 0) {
        // �վ�t�ư��k�A�Ϩ䬰�V�U���㪺���G
        std::cout << a << "/" << b << "=" 
                  << (a / b - 1) << "..." << (a % b + b) 
                  << '\n';
    } else {
        std::cout << a << "/" << b << "=" 
                  << (a / b) << "..." << (a % b) 
                  << '\n';
    }

    return 0;
}
