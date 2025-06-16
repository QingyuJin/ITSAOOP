#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 35 == 0) {
            if (i == 35) {
                std::cout << i;
            } else {
                std::cout << ' ' << i;
            }
        }
    }
    std::cout << '\n';
    return 0;
}
