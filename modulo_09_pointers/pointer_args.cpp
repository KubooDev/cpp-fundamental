// Compilar no Linux como:
//      g++ -std=c++11 pointer_args.cpp -o pointer_args

#include <iostream>

int main(int argc, char *argv[]) {
    std::cout << "Total de argumentos: " << argc << std::endl;

    std::cout << "Argumentos:" << std::endl;
    for(int i = 0; i < argc; i++)
        std::cout << "\t" << argv[i] << std::endl;
}