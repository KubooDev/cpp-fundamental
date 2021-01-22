// Compilar no Linux como:
//      g++ -std=c++11 lambda_soma_simples2.cpp -o lambda_soma_simples2

#include <iostream>
#include <functional>

int main() {
    std::function<double (double, double)> soma;
    
    soma = [](double a, double b)->double {
        return(a + b);
    };

    std::cout << "Soma = " << soma(12.2, 13.9) << std::endl;

    return(0);
}