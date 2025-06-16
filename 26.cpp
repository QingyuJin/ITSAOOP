#include <iostream>

int main() {
    int N;
    if (!(std::cin >> N)) return 0;

    for (int i = 1; i <= N; ++i) {
        std::cout << i << '*' << i << '=' << (i * i) << '\n';
    }

    return 0;
}
