#include <iostream>

int main() {
    int N;
    if (!(std::cin >> N)) return 0;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        // �㰣 2 �P 3�]�Y�㰣 6�^�A�����i�㰣 12
        if ((i % 2 == 0 && i % 3 == 0) && (i % 12 != 0)) {
            sum += i;
        }
    }

    std::cout << sum << '\n';
    return 0;
}
