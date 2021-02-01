// Compilar no Linux como:
//      g++ -std=c++11 pointer_stru.cpp -o pointer_stru

#include <iostream>

struct Dados {
    char nome[100];
    int  idade;
    float salario;
    float SalarioAnual() {
        return(salario * 13);
    }

    void MostraRegistro() {
        std::cout << "Nome : " << this->nome << std::endl;
        std::cout << "Idade: " << this->idade << std::endl;
        std::cout << "Salario Mensal: " << this->salario << std::endl;
        std::cout << "Salario Anual : " << this->SalarioAnual() << std::endl;
        std::cout << "this->" << this << std::endl;
    }
};

int main() {
    Dados *ptrDados = new Dados;

    sprintf(ptrDados->nome, "João da Silva");
    ptrDados->idade = 25;
    ptrDados->salario = 2500;
    ptrDados->MostraRegistro();

    std::cout << "Memória: " << ptrDados << std::endl;

    delete ptrDados;
}
