#include <iostream>

int main() {
    int a, b, c;
    if (!(std::cin >> a >> b >> c)) return 0;

    // �P�_�O�_��c���T���ΡG������M�j��ĤT��
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        std::cout << "fit\n";
    } else {
        std::cout << "unfit\n";
    }

    return 0;
}
