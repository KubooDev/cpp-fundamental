#include <iostream>
#include <functional>

int main() {
    std::function<int (int)> fatorial;

    fatorial = [&fatorial](int n)->long int {
        if (n <= 1) return(1);
        return(n * fatorial(n-1));
    };

    std::cout << "Fatorial = " << fatorial(5) << std::endl;

    return(0);
}