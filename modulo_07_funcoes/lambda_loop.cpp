#include <iostream>
#include <functional>

template<typename F>
void Loop(int n, const F& f) {
    for (int i = 1; i <= n; i++) {
        f(i);
    }
}

int main() {
    int resultado = 0;

    Loop(10, [&](int valor) {
        resultado += valor;
    });

    std::cout << "Resultado da Soma = " << resultado << std::endl;

    return(0);
}