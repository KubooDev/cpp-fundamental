// Compilando Linux como:
//     g++ -std=c++11 struct_basico2.cpp -o struct_basico2

#include <iostream>

// Formato simples da estrutura em C
struct Fruta {
    std::string nome;
    int pesoGramas;
    float custoUnitario;

    void Imprime(std::string nome = "") {
        std::cout << "Fruta: " << ((nome == "") ? this->nome : nome) << std::endl;
        std::cout << "Peso em gramas: " << pesoGramas << std::endl;
        std::cout << "Custo Unitario: " << custoUnitario << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    Fruta fruta = {"Banana Prata", 100, 0.20};

    fruta.Imprime("Banana Nanica");
    fruta.Imprime();

    return(0);
}

