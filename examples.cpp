
#include "print_type.hpp"

#include <iostream>
#include <vector>

// function1 takes its argument *by value*.
// You can experiment with different ways to call it
template <typename T>
void function1(T t)
{
    std::cout << "function1: T is " << type_name<T>() << '\n';
};

void call_function1()
{
    int i = 0;
    const int ci = 1;

    std::cout << "calling function1(int)\n";
    function1(i);
    std::cout << "calling function1(const int)\n";
    function1(ci);
    std::cout << "calling function1(literal)\n";
    function1(3);
}

template <typename T>
void function2(const T& t)
{
    std::cout << "function2: T is " << type_name<T>() << '\n';
}

void call_function2()
{
    int i = 0;
    const int ci = 1;

    std::cout << "calling function2(int)\n";
    function2(i);
    std::cout << "calling function2(const int)\n";
    function2(ci);
    std::cout << "calling function2(literal)\n";
    function2(3);
}

int main()
{
    call_function1();
    std::cout << '\n';

    call_function2();
    std::cout << '\n';
}