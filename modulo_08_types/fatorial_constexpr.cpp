#include <iostream>

template<int N>
constexpr int Fatorial() {
    return N * Fatorial<N-1>();
}

template<>
constexpr int Fatorial<1>() {
    return 1;
}


int main() {
    int valor = Fatorial<12>();

    std::cout << "Fatorial = " << valor << std::endl;

    return(0);
}