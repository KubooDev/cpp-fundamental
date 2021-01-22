// Compilar no Linux como:
//      g++ -std=c++11 lambda_recursividade.cpp -o lambda_recursividade

#include <iostream>
#include <functional>

int main() {
    // A declaração "auto" para inicialização da variável fatorial não é permitida
    // por alguns motivos:
    //   1) A referência da variável "fatorial" passada para a função lambda ocorre antes
    //      que o tipo de variável seja resolvido pelo compilador
    //   2) A chamada da variável função "fatorial" em "return" ocorre antes que o seu tipo seja
    //      resolvido pelo compilador
    std::function<long int (int)> fatorial;

    // O nome da função é substituída pela variável de apontamento na função lambda
    // para que seja possível a recursividade
    // Por se tratar de uma variável declarada num escopo externo, a mesma deve
    // ser tratada na função lambda
    fatorial = [&fatorial](int n) {
        return (n <= 1) ? 1 : n * fatorial(n-1);
    };

    std::cout << "Fatorial = " << fatorial(5) << std::endl;

    return(0);
}