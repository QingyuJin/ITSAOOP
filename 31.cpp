#include <iostream>

int main() {
    int N;
    if (!(std::cin >> N)) return 0;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        // 整除 2 與 3（即整除 6），但不可整除 12
        if ((i % 2 == 0 && i % 3 == 0) && (i % 12 != 0)) {
            sum += i;
        }
    }

    std::cout << sum << '\n';
    return 0;
}
