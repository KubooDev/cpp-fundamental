#include <iostream>

constexpr int Fibonacci(int n) {
    return (n <= 1) ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    const int resultado = Fibonacci(30);

    std::cout << "Resultado = " << resultado << std::endl;

    return(0);
}
