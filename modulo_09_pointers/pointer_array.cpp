// Compilar no Linux como:
//      g++ -std=c++11 pointer_array.cpp -o pointer_array

#include <iostream>

int main() {
    int aint[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptrInt;

    ptrInt = aint; // Ponteiro para a primeira posição da Matriz

    std::cout << "Memória - Primeira posição da Matriz   : " << aint << std::endl;
    std::cout << "Memória - Primeira posição do Ponteiro : " << ptrInt << std::endl;

    std::cout << "Memória - Segunda posição da Matriz    : " << &aint[1] << std::endl;
    std::cout << "Memória - Segunda posição do Ponteiro  : " << (ptrInt + 1) << std::endl;

    std::cout << "Memória - Terceira posição da Matriz   : " << &aint[2] << std::endl;
    std::cout << "Memória - Terceira posição do Ponteiro : " << (ptrInt + 2) << std::endl;

    // Primeira posição do Ponteiro passa a ser a 4 posição da Matriz
    ptrInt = &aint[3];
    std::cout << "Valor da Primeira posição da Matriz    : " << aint[0] << std::endl;
    std::cout << "Valor da Primeira posição do Ponteiro  : " << *ptrInt << std::endl;

    std::cout << "Valor da posição -1 do Ponteiro        : " << *(ptrInt - 1) << std::endl;
    std::cout << "Valor da posição -2 do Ponteiro        : " << *(ptrInt - 2) << std::endl;

    // Equivalenta a posição "0" da Matriz
    std::cout << "Valor da posição -3 do Ponteiro        : " << *(ptrInt - 3) << std::endl;

    // Equivalenta a posição "-1" da Matriz
    // Memória não reservada para essas variáveis, pode coletar um lixo qualquer
    // ou invadir o dado que está sendo tratado por outra variável
    // É imprevisível o que pode ser coletado
    std::cout << "Valor da posição -4 do Ponteiro        : " << *(ptrInt - 4) << std::endl;
    
    // Assim como a posição anterior, a posição 11 é um valor que ultrapassa
    // o valor reservado, portanto, outro valor indeterminado
    std::cout << "Valor da posição 11 do Ponteiro        : " << *(ptrInt + 10) << std::endl;

    return 0;
}