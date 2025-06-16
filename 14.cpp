#include <iostream>

int main() {
    long long seconds;
    if (!(std::cin >> seconds)) return 0;

    // 計算天數
    long long days = seconds / (24LL * 60 * 60);
    seconds %= (24LL * 60 * 60);

    // 計算小時
    int hours = seconds / (60LL * 60);
    seconds %= (60LL * 60);

    // 計算分鐘
    int minutes = seconds / 60;
    seconds %= 60;

    // 輸出結果
    std::cout 
        << days    << " days\n"
        << hours   << " hours\n"
        << minutes << " minutes\n"
        << seconds << " seconds\n";

    return 0;
}
