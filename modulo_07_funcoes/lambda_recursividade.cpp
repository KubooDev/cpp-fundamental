#include <iostream>
#include <functional>

int main() {
    std::function<int (int)> Fatorial;

    Fatorial = [&Fatorial](int n) {
        if (n <= 1) return(1);
        return(n * Fatorial(n-1));
    };

    std::cout << "Fatorial = " << Fatorial(5) << std::endl;

    return(0);
}