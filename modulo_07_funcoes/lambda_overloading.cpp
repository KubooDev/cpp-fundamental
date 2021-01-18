#include <iostream>
#include <functional>

template<typename F>
int Operador(int a, int b, const F& f) {
    return(f(a, b));
}

int Operador(int a, int b) {
    return(a + b);
}

int main() {
    int operacao = Operador(11, 12, [](int a, int b) {
        return(a * b);
    });

    int operacao2 = Operador(11, 12);


    std::cout << "Resultado da Operação = " << operacao << std::endl;
    std::cout << "Resultado da Operação 2 = " << operacao2 << std::endl;

    return(0);
}