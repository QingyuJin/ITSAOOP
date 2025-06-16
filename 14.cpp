#include <iostream>

int main() {
    long long seconds;
    if (!(std::cin >> seconds)) return 0;

    // �p��Ѽ�
    long long days = seconds / (24LL * 60 * 60);
    seconds %= (24LL * 60 * 60);

    // �p��p��
    int hours = seconds / (60LL * 60);
    seconds %= (60LL * 60);

    // �p�����
    int minutes = seconds / 60;
    seconds %= 60;

    // ��X���G
    std::cout 
        << days    << " days\n"
        << hours   << " hours\n"
        << minutes << " minutes\n"
        << seconds << " seconds\n";

    return 0;
}
