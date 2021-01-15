#include <iostream>

// Função de saída quando restar somete 1 parâmetro de entrada
template<typename T>
T Soma(T a) {
    return(a);
}

// Recursividade de Soma para 2 ou mais parâmetros
template<typename P, typename ... R>
P Soma(P a, R ... r) {
    return(a + Soma(r ...));
}

int main() {
    // Teste da função de soma
    std::cout << "Valor da Soma = " << Soma(20, 50) << std::endl;

    return(0);
}