#include <iostream>

int main() {
    int a, b;
    if (!(std::cin >> a >> b)) return 0;

    // �ϥ�?�L���o��k?��̤j��??�]GCD�^
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    std::cout << a << '\n';
    return 0;
}
