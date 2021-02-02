// Compilar no Linux, como:
//      g++ -std=c++11 pointer_functions.cpp -o pointer_functions

#include <iostream>

double Soma(double *a, double *b) {
    std::cout << "\tMemoria de a = " << (void *) a << std::endl;
    std::cout << "\tMemoria de b = " << (void *) b << std::endl;

    return(*a + *b);
}

int Soma2(int a, int b) {
    return (a + b);
}

void Loop(void *ptrFunc) {
    int (*ptrSoma)(int, int);

    ptrSoma = (int (*)(int, int)) ptrFunc;

    for (int i = 0; i < 5; i++) 
        std::cout << "\t" << (*ptrSoma)(i, i) << std::endl;
}

int main() {
    std::cout << "\nExemplo 1 - Passando o endereço das variáveis como parâmetro" << std::endl;
    double valor1 = 10;
    double valor2 = 22;
    double resultado;

    std::cout << "\tMemoria de valor1 = " << (void *) &valor1 << std::endl;
    std::cout << "\tMemoria de valor2 = " << (void *) &valor2 << std::endl;

    resultado = Soma(&valor1, &valor2);
    std::cout << "\tSoma = " << resultado << std::endl;

    std::cout << "\nExemplo 2 - Passando ponteiros como parâmetros" << std::endl;
    double *ptrValor1 = new double;
    double *ptrValor2 = new double;

    *ptrValor1 = 32;
    *ptrValor2 = 45;

    std::cout << "\tMemoria de ptrValor1 = " << (void *) ptrValor1 << std::endl;
    std::cout << "\tMemoria de ptrValor2 = " << (void *) ptrValor2 << std::endl;

    resultado  = Soma(ptrValor1, ptrValor2);

    std::cout << "\tSoma = " << resultado << std::endl;

    delete ptrValor1;
    delete ptrValor2;

    std::cout << "\nExemplo 3 - Definindo um ponteiro de função" << std::endl;
    double (*ptrSoma)(double *, double *);
    ptrSoma = &Soma;

    std::cout << "\tMemoria função Soma Original = " << (void *) Soma    << std::endl;
    std::cout << "\tMemória ponteiro de função   = " << (void *) ptrSoma << std::endl;

    valor1 = 22;
    valor2 = 33;
    resultado = (*ptrSoma)(&valor1, &valor2);
    std::cout << "\tSoma = " << resultado << std::endl;
    
    std::cout << "\nExemplo 4 - Ponteiro de função com parâmetro" << std::endl;
    
    Loop((void *) Soma2);
    
    return 0;
}
