// Compilar no Linux com:
//   g++ -std=c++11 lambda_lambda_soma.cpp -o lambda_lambda_soma

#include <iostream>

int main() {
    auto soma = [](double a) {
        // parâmetro "a" é externo à função lambda abaixo
        // portanto, deve ser capturado
        return [a](double b) {
            return(a + b);
        };
    };

    auto soma2 = soma(10);

    std::cout << "Valor de Soma com 2 funções lambda = " << soma(12)(15) << std::endl;
    std::cout << "Valor de Soma com valor fixo 10 = " << soma2(45) << std::endl;

    return(0);
}
