// Compilar no linux como: 
// g++ -std=c++11 nolambda_loop.cpp -o nolambda_loop

#include <iostream>

template<typename F>
void Loop(int n, F f) {
    for (int i = 1; i <= n; i++) {
        f(i);
    }
}

void MostraValor(int valor) {
    std::cout << "Valor -> " << valor << std::endl;
}

int main() {
    Loop(10, MostraValor);

    return(0);
}