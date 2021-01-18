#include <iostream>
#include <functional>

int main() {
    std::function<double (double, double)> Soma;
    
    Soma = [](double a, double b)->double {
        return(a + b);
    };

    std::cout << "Soma = " << Soma(12.2, 13.9) << std::endl;

    return(0);
}