#include <iostream>

int main() {
    int i;
    if (!(std::cin >> i)) return 0;

    if (i > 31) {
        std::cout << "Value of more than 31\n";
    } else {
        // �ϥΦ첾�p�� 2 �� i ����
        unsigned long long result = 1ULL << i;
        std::cout << result << '\n';
    }

    return 0;
}
