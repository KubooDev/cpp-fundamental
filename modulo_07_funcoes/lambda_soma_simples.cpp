#include <iostream>

int main() {
    auto soma = [](double a, double b) {
        return(a + b);
    };

    auto soma2 = soma;

    std::cout << "Soma Original = " << soma(10, 7) << std::endl;
    std::cout << "Soma Secundaria = " << soma2(20, 30) << std::endl;

    return(0);
}