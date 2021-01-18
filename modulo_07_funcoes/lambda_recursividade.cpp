#include <iostream>
#include <functional>

int main() {
    std::function<int (int)> fatorial;

    fatorial = [&fatorial](int n)->long int {
        return (n <= 1) ? 1 : n * fatorial(n-1);
    };

    std::cout << "Fatorial = " << fatorial(5) << std::endl;

    return(0);
}