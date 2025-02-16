#include "utils.h"
#include <iostream>

int main() {
    int a = 8, b = 5;
    std::cout << "Сумма: " << add(a, b) << std::endl;
    std::cout << "Разности: " << subtract(a, b) << std::endl;
    return 0;
}
