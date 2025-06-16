#include <iostream>
#include <cmath>

int main() {
    int distance;
    if (!(std::cin >> distance)) return 0;

    double your_speed   = 1.0;                        // 你的速度 (m/s)
    double friend_speed = 30.0 * 2.54 / 100.0;        // 朋友速度由 30 in/s 轉成 m/s

    double time = distance / (your_speed - friend_speed);

    // 向上取整：原程式用 (int)(time + 0.9999)
    int result = static_cast<int>(time + 0.9999);

    std::cout << result << '\n';
    return 0;
}
