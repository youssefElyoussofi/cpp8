#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(6);
    mstack.push(7);
    mstack.push(8);


    std::cout << "addr begin : " << mstack.begin() << std::endl;
    std::cout << "addr end : " << mstack.end() << std::endl;
    std::cout << "addr begin : " << mstack.begin() << std::endl;

    return 0;
}