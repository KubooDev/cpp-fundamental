// Compilar no linux como: 
// g++ -std=c++11 lambda_loop.cpp -o lambda_loop

#include <iostream>

template<typename F>
void Loop(int n, F f) {
    for (int i = 1; i <= n; i++) {
        f(i);
    }
}

// Sobrecarregando a função Loop para não obrigar a entrada de uma função lambda
void Loop(int n) {
    Loop(n, [](int valor){});
}

int main() {
    int resultado = 0;

    Loop(10, [&](int valor) {
        resultado += valor;
    });

    std::cout << "Resultado da Soma = " << resultado << std::endl;

    return(0);
}