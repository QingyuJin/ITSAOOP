#include <iostream>

int main(int argc, char* argv[]) {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;

    std::cout << a << "+" << b << "=" << (a + b) << '\n';
    std::cout << a << "*" << b << "=" << (a * b) << '\n';
    std::cout << a << "-" << b << "=" << (a - b) << '\n';

    if (a < 0) {
        // 調整負數除法，使其為向下取整的結果
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
