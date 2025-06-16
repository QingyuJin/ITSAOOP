#include <iostream>

int main() {
    int money;
    if (!(std::cin >> money)) return 0;

    int nt10 = money / 10;
    money %= 10;

    int nt5 = money / 5;
    money %= 5;

    int nt1 = money;

    std::cout << "NT10=" << nt10 << '\n'
              << "NT5="  << nt5  << '\n'
              << "NT1="  << nt1  << '\n';

    return 0;
}
