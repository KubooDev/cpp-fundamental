// Compilando Linux como:
//     g++ -std=c++11 struct_basico.cpp -o struct_basico

#include <iostream>

// Formato simples da estrutura em C
struct Fruta {
    std::string nome;
    int pesoGramas;
    float custoUnitario;
};

void ImprimeFruta(const Fruta& fruta) {
    std::cout << "Fruta: " << fruta.nome << std::endl;
    std::cout << "Peso em gramas: " << fruta.pesoGramas << std::endl;
    std::cout << "Custo Unitario: " << fruta.custoUnitario << std::endl;
    std::cout << std::endl;
}

int main() {
    Fruta fruta = {"Banana", 100, 0.20};

    ImprimeFruta(fruta);

    return(0);
}
