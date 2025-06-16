#include <iostream>

int main() {
    int a, b, c;
    if (!(std::cin >> a >> b >> c)) return 0;

    int A = a * a;
    int B = b * b;
    int C = c * c;

    // �P�_�O�_��c���T���ΡG�����䤧�M�j��ĤT��
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // �����T����
        if (A + B == C || B + C == A || A + C == B) {
            std::cout << "Right Triangle\n";
        }
        // �w���T����
        else if (A + B < C || B + C < A || A + C < B) {
            std::cout << "Obtuse Triangle\n";
        }
        // �U���T����
        else {
            std::cout << "Acute Triangle\n";
        }
    } else {
        std::cout << "Not Triangle\n";
    }

    return 0;
}
