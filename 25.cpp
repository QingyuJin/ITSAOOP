#include <iostream>

int main() {
    int N;
    if (!(std::cin >> N)) return 0;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    std::cout << sum << '\n';
    return 0;
}
