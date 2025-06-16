#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {
    double x, y;
    if (std::cin >> x >> y) {
        double ans = x * y / 2.0;
        std::cout << std::fixed << std::setprecision(1)
                  << ans << '\n';
    }
    return 0;
}
