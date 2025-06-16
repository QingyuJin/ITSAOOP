#include <iostream>

int main() {
    int start_hour, start_minute, end_hour, end_minute;
    if (!(std::cin >> start_hour >> start_minute >> end_hour >> end_minute))
        return 0;

    int total_minutes = (end_hour * 60 + end_minute)
                      - (start_hour * 60 + start_minute);

    int total_cost = 0;
    if (total_minutes <= 120) {
        // �e��p�ɡA�C30����30��
        total_cost = (total_minutes / 30) * 30;
    } else if (total_minutes <= 240) {
        // �W�L2�p�ɥ���4�p�ɡG�e2�p�ɩT�w120���A����C30����40��
        total_cost = 120 + ((total_minutes - 120) / 30) * 40;
    } else {
        // �W�L4�p�ɡG�e4�p�ɩT�w120+160=280���A����C30����60��
        total_cost = 120 + 160 + ((total_minutes - 240) / 30) * 60;
    }

    std::cout << total_cost << '\n';
    return 0;
}
