#include "easyfind.hpp"
#include <vector>
#include <list>

template <typename T> void print(const T& container)
{
    std::cout << "\nprinting container sequences\n";
    for (typename T::const_iterator it = container.begin();it != container.end();it++)
    {
        std:: cout << *it << '\t';
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v(5,1);
    std::cout << "\n test 1\n";
    print(v);
    try
    {
        easyfind(v,11);
        std::cout << "success :) element exist in container\n"; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    v.push_back(11);
    print<std::vector<int> >(v);
    try
    {
        easyfind(v,11);
        std::cout << "success :) element exist in container\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n test 2\n";
    std::list<int> l(5,4);
    print(l);
    try
    {
        easyfind(v,12);
        std::cout << "success :) element exist in container\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    l.push_front(12);
    print(l);
    try
    {
        easyfind(l,12);
        std::cout << "success :) element exist in container\n";

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}