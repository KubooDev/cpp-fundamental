#include <iostream>

template<class P, class S>
auto Maior(P a, S b)->decltype((a > b) ? a : b) {
    return((a > b) ? a : b);
}

int main() {
    std::cout << "Resultado(1) Maior = " << Maior(10.2, 2) << std::endl;
    std::cout << "Resultado(2) Maior = " << Maior(10, 2.3) << std::endl;

    std::cout << "Resultado(1) Tipo Maior = " << typeid(Maior(10.2, 2)).name() << std::endl;
    std::cout << "Resultado(2) Tipo Maior = " << typeid(Maior(10, 2)).name() << std::endl;

    return(0);
}
