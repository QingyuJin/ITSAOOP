#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {
    double x, y, high;

    // 讀取三個 double 值，直到 EOF
    while (std::cin >> x >> y >> high) {
        double ans = (x + y) * high / 2.0;
        std::cout << "Trapezoid area:" 
                  << std::fixed << std::setprecision(1) 
                  << ans << '\n';
    }

    return 0;
}
