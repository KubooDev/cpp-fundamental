#include <iostream>

int main() {
    char *ptrMsg = new char[100];
    std::string msg;

    sprintf(ptrMsg, "Mensagem em ponteiro char");
    msg = ptrMsg;   // Conversão automática em atribuição para string

    std::cout << "ponteiro ptrMsg = " << ptrMsg << std::endl;
    std::cout << "string msg      = " << msg << std::endl;
    std::cout << std::endl;

    msg = "Mensagem em string";
    sprintf(ptrMsg, msg.c_str());   // ...c_str() converte para string literal

    std::cout << "ponteiro ptrMsg = " << ptrMsg << std::endl;
    std::cout << "string msg      = " << msg << std::endl;

    delete [] ptrMsg;

    return 0;
}
