#include <iostream>

int main() {
    int i;
    if (!(std::cin >> i)) return 0;

    bool first = true;
    for (int a = 1; a <= i; ++a) {
        if (i % a == 0) {
            if (first) {
                std::cout << a;
                first = false;
            } else {
                std::cout << ' ' << a;
            }
        }
    }
    std::cout << '\n';
    return 0;
}
