#include <iostream>
#include <functional>

template <typename T>
struct GetArity : GetArity<decltype(&T::operator())> {};

template <typename ReturnType, typename... Args>
struct GetArity<ReturnType(*)(Args...)> : std::integral_constant<unsigned, sizeof...(Args)> {};

template <typename ReturnType, typename ClassType, typename... Args>
struct GetArity<ReturnType(ClassType::*)(Args...)> : std::integral_constant<unsigned, sizeof...(Args)> {};

template <typename ReturnType, typename ClassType, typename... Args>
struct GetArity<ReturnType(ClassType::*)(Args...) const> : std::integral_constant<unsigned, sizeof...(Args)> {};

template<typename F>
void printArity(F f) {
    std::cout << "arity: " << GetArity<F>() << std::endl;
}

int main() {
    printArity([](){}); // prints 0
    printArity([&](int x, float y){}); // prints 2
    
    return(0);
}