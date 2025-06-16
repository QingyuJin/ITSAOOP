#include <iostream>
#include <iomanip>

int main() {
    int hours, hourly_rate;
    if (!(std::cin >> hours >> hourly_rate)) return 0;

    double total_salary = 0.0;
    if (hours <= 60) {
        total_salary = hours * hourly_rate;
    } else if (hours <= 120) {
        total_salary = 60 * hourly_rate
                     + (hours - 60) * hourly_rate * 1.33;
    } else {
        total_salary = 60 * hourly_rate
                     + 60 * hourly_rate * 1.33
                     + (hours - 120) * hourly_rate * 1.66;
    }

    std::cout << std::fixed << std::setprecision(1)
              << total_salary << '\n';
    return 0;
}
