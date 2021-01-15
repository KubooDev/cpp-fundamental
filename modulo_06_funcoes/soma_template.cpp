#include <iostream>

template<typename T>
T Soma(T a) {
    return(a);
}

template<typename P, typename ... R>
P Soma(P a, R ... r) {
    return(a + Soma(r ...));
}

int main() {
    std::cout << "Valor da Soma = " << Soma(20, 50) << std::endl;

    return(0);
}