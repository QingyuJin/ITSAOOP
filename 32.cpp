#include <iostream>

int main() {
    int number;
    if (!(std::cin >> number)) return 0;

    int original = number;
    int sum = 0;

    // �N�C��Ʀr���ߤ�֥[
    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    // �ˬd�O�_�����i�����ơ]�U��ߤ�M�����ơ^
    if (sum == original) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}
