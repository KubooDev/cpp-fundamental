// Compilar no Linux como:
//      g++ -std=c++11 pointer_int.cpp -o pointer_int

#include <iostream>

int main() {
    // Todos os ponteiros são do tipo "int *"
    int *ptrValor1; // Simples declaração
    int *ptrValor2 = nullptr; // Ponteiro para endereço nullptr (vazio)
    int *ptrValor3 = new int; // Ponteiro com alocação dinâmica
    int *ptrValor4 = new int(10); //Ponteiro com alocação dinâmica e inicialização

    int a = 23;
    int b = 50;

    // Endereço de memória de todos os ponteiros
    std::cout << "Memória ptrValor1: " << ptrValor1 << std::endl;
    std::cout << "Memória ptrValor2: " << ptrValor2 << std::endl;
    std::cout << "Memória ptrValor3: " << ptrValor3 << std::endl;
    std::cout << "Memória ptrValor4: " << ptrValor4 << std::endl;
    std::cout << std::endl;

    ptrValor1 = &a; // Endereço da variável "a"
    ptrValor2 = &b; // Endereço da variável "b"

    // Mostram os valores do conteúdo de memória apontado pelos ponteiros
    std::cout << "Valor em *ptrValor1: " << *ptrValor1 << std::endl;
    std::cout << "Valor em *ptrValor2: " << *ptrValor2 << std::endl;
    std::cout << "Valor em *ptrValor3: " << *ptrValor3 << std::endl;
    std::cout << "Valor em *ptrValor4: " << *ptrValor4 << std::endl;
    std::cout << std::endl;

    // Mostra os novos endereços de memória daqueles que foram alterados
    std::cout << "Memória ptrValor1: " << ptrValor1 << std::endl;
    std::cout << "Memória ptrValor2: " << ptrValor2 << std::endl;
    std::cout << "Memória ptrValor3: " << ptrValor3 << std::endl;
    std::cout << "Memória ptrValor4: " << ptrValor4 << std::endl;
    std::cout << std::endl;

    delete ptrValor3;
    delete ptrValor4;

    return 0;
}