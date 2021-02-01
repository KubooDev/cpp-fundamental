#include <iostream>
#include <cstring>

int main() {
    // Exemplo 1: Ponteiro Fixo
    // Não é permitido alterar o conteúdo apontado, mas, é
    // permitido alterar o apontamento
    char *msg1 = "Essa é uma string de ponteiro"; 

    std::cout << "\nExemplo 1: Ponteiro Fixo" << std::endl;

    std::cout << "\tMemória : " << static_cast<void *>(msg1) << std::endl;
    std::cout << "\tMensagem: " << msg1 << std::endl;

    msg1 = "Essa é outra string de ponteiro";

    std::cout << "\tMemória : " << static_cast<void *>(msg1) << std::endl;
    std::cout << "\t Mensagem: " << msg1 << std::endl;

    // Exemplo 2 - Alterando o conteúdo apontado
    char amsg[] = "Essa é uma string em matriz";
    char *msg2 = amsg;

    std::cout << "\nExemplo 2 - Alterando o conteúdo apontado" << std::endl;
    std::cout << "\tMemória matriz  : " << static_cast<void *>(amsg) << std::endl;
    std::cout << "\tMemória ponteiro: " << static_cast<void *>(msg2) << std::endl;

    msg2[0] = 'A';
    msg2[1] = 'B';
    msg2[9] = 'C';

    std::cout << "\tAlterada Mensagem matriz  : " << amsg << std::endl;
    std::cout << "\tAlterada Mensagem ponteiro: " << msg2 << std::endl;

    // Exemplo 3 - Alocação Dinâmica
    char *msg3 = new char[100]; // Aloca 100 posições na memória

    std::cout << "\nExemplo 3 - Alocação Dinâmica de Memória" << std::endl;
    std::cout << "\tMemória : " << static_cast<void *>(msg3) << std::endl;
    std::cout << "\tMensagem: " << msg3 << std::endl;

    strcpy(msg3, "Essa é uma string para um ponteiro dinâmico");

    std::cout << "\tMemória : " << static_cast<void *>(msg3) << std::endl;
    std::cout << "\tMensagem: " << msg3 << std::endl;

    strcpy(msg3, "Essa é uma string copiada com a função strcpy");
    std::cout << "\tMemória : " << static_cast<void *>(msg3) << std::endl;
    std::cout << "\tMensagem: " << msg3 << std::endl;

    sprintf(msg3, "Essa é um string copiada com a função sprintf");
    std::cout << "\tMemória : " << static_cast<void *>(msg3) << std::endl;
    std::cout << "\tMensagem: " << msg3 << std::endl;

    delete [] msg3; // libera a área de memória alocada
}
