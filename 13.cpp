#include <iostream>

int main() {
    int start_hour, start_minute, end_hour, end_minute;
    if (!(std::cin >> start_hour >> start_minute >> end_hour >> end_minute))
        return 0;

    int total_minutes = (end_hour * 60 + end_minute)
                      - (start_hour * 60 + start_minute);

    int total_cost = 0;
    if (total_minutes <= 120) {
        // 前兩小時，每30分鐘30元
        total_cost = (total_minutes / 30) * 30;
    } else if (total_minutes <= 240) {
        // 超過2小時未滿4小時：前2小時固定120元，之後每30分鐘40元
        total_cost = 120 + ((total_minutes - 120) / 30) * 40;
    } else {
        // 超過4小時：前4小時固定120+160=280元，之後每30分鐘60元
        total_cost = 120 + 160 + ((total_minutes - 240) / 30) * 60;
    }

    std::cout << total_cost << '\n';
    return 0;
}
