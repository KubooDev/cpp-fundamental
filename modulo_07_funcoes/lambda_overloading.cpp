// Compilar no Linux como:
//      g++ -std=c++11 lambda_overloading.cpp -o lambda_overloading

#include <iostream>
#include <functional>

// Parâmetro função lambda como referência
// a referência deve ser declarada como constante para que o conteúdo da
// memória correspondente (função lambda) não possa ser alterado em tempo
// de execução
template<typename F>
int Operador(int a, int b, const F& f) {
    return(f(a, b));
}

// Sobrecarregando a função "Operador" com uma operação padrão (Soma)
// para que o parâmetro "lambda" seja opcional
int Operador(int a, int b) {
    return(a + b);
}

int main() {
    // Multiplica 2 valores na operação
    int operacao = Operador(11, 12, [](int a, int b) {
        return(a * b);
    });

    // Soma 2 valores na operação
    int operacao2 = Operador(11, 12);

    std::cout << "Resultado da Operação = " << operacao << std::endl;
    std::cout << "Resultado da Operação 2 = " << operacao2 << std::endl;

    return(0);
}