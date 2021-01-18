#include <iostream>

int main() {
    const auto numA = 10;
    const auto textB = "Texto de Exemplo";
    const auto decC = 2.3;

    const std::type_info& tipoCout = typeid(std::cout << numA); 

    std::cout << "Tipo de numA: " << typeid(numA).name() << std::endl;
    std::cout << "Tipo de textB: " << typeid(textB).name() << std::endl;
    std::cout << "Tipo de decC: " << typeid(decC).name() << std::endl;
    std::cout << "Tipo de tipoCout: " << tipoCout.name() << std::endl;

    return(0);
}