#include <iostream>

// Função de Saída para a recursividade de parâmetros variáveis
template<typename T>
T Maior(T a) {
    return(a);
}

// Recursividade para encontrar o maior valor entre os parâmetros variáveis
template<typename P, typename ... R>
P Maior(P a, R ... r) {
    P b = Maior(r ...);
    return((a > b) ? a : b);
}

int main() {
    // Realização de testes da função Maior
    std::cout << "Maior valor = " << Maior(10, 20, 7, 4, 15) << std::endl;

    return(0);
}