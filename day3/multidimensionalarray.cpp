#include <iostream>

int main() {
    int x[2][2][2] = {
        {{0,1},{2,3}},
        {{4,5},{6,7}}
    };

    for (auto &i : x) {
        for (auto &j : i) {
            for (auto &k : j) {
                std::cout << k << std::endl;
            }
        }
    }

    return 0;
}
