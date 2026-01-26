#ifndef easyfind_hpp
#define easyfind_hpp

#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T container, int find)
{
    typename T::iterator it;
    it = std::find(container.begin(),container.end(),find);
    if (*it == find)
        std::cout << "success :) element exist in container\n";   
    else
        std::cout << "failure !! element not exist in container\n";
}

#endif