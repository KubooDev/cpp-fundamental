// Compilando Linux como:
//     g++ -std=c++11 struct_matriz.cpp -o struct_matriz

#include <iostream>

// Formato simples da estrutura em C
struct Fruta {
    std::string nome;
    int pesoGramas;
    float custoUnitario;

    // Apenas a declaração da Função membro Imprime, o código da função
    // foi escrita externamente a definição da estrutura
    void Imprime(std::string);
};

// Código da função membro Imprime pertencente a estrutura Fruta
void Fruta::Imprime(std::string nome = "") {
    std::cout << "Nome = " << ((nome == "") ? this->nome : nome) << std::endl;
    std::cout << "Peso = " << this->pesoGramas << std::endl;
    std::cout << "Custo = " << custoUnitario << std::endl;
    std::cout << std::endl;
}

int main() {
    Fruta fruta[] = {
        {"Banana Prata", 100, 0.50},
        {"Morango", 20, 0.20}
    };

    fruta[0].Imprime("Banana Nanica");
    fruta[1].Imprime();

    return 0;
}
