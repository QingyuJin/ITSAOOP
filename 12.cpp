#include <iostream>
#include <cmath>

int main() {
    int distance;
    if (!(std::cin >> distance)) return 0;

    double your_speed   = 1.0;                        // �A���t�� (m/s)
    double friend_speed = 30.0 * 2.54 / 100.0;        // �B�ͳt�ץ� 30 in/s �ন m/s

    double time = distance / (your_speed - friend_speed);

    // �V�W����G��{���� (int)(time + 0.9999)
    int result = static_cast<int>(time + 0.9999);

    std::cout << result << '\n';
    return 0;
}
