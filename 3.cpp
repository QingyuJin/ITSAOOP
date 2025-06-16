#include <iostream>

int main(int argc, char* argv[]) {
    int a, b;
    while (std::cin >> a >> b) {
        std::cout << (a + b) << '\n';
    }
    return 0;
}
