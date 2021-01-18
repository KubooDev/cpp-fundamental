#include <iostream>

int main() {
    auto Soma = [](double a, double b) {
        return(a + b);
    };

    auto Soma2 = Soma;

    std::cout << "Soma Original = " << Soma(10, 7) << std::endl;
    std::cout << "Soma Secundaria = " << Soma2(20, 30) << std::endl;

    return(0);
}