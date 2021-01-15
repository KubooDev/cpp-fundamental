#include <iostream>

// Realiza soma de 0 à 5 parâmetros de entrada na chamada
double Soma(double a = 0, double b = 0, double c = 0, double d = 0, double e = 0) {
    return(a + b + c + d +e);
}

int main() {
    // Chamadas de teste da função
    std::cout << "Resultado da Soma = " << Soma(10, 20, 30, 40) << std::endl;

    return(0);
}