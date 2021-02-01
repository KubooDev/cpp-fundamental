// Compilar no Linux, como:
//      g++ -std=c++11 hexa.cpp -o hexa
#include <iostream>

int main() {
    // 0x -> Informa ao compilado que o número a seguir está em notação Hexadecimal
    int hexa_a = 0xf;   
    int hexa_b = 0x2a;  
    int hexa_c = 0x1b5; 

    std::cout << "Valor em Decimal de hexa_a = " << hexa_a << std::endl;
    std::cout << "Valor em Decimal de hexa_b = " << hexa_b << std::endl;
    std::cout << "Valor em Decimal de hexa_c = " << hexa_c << std::endl;
    std::cout << std::endl;

    // Pode-se trabalhar normalmente em Hexadecimal
    hexa_a = 0x1b * 0x2f;
    hexa_b = 0x34e - 0x1dd;
    hexa_c = 0x43b / 0xd4;

    std::cout << "Novo valor em Decimal de hexa_a = " << hexa_a << std::endl;
    std::cout << "Novo valor em Decimal de hexa_b = " << hexa_b << std::endl;
    std::cout << "Novo valor em Decimal de hexa_c = " << hexa_c << std::endl;
    std::cout << std::endl;
}