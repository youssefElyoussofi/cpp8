#ifndef easyfind_hpp
#define easyfind_hpp

#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
void easyfind(T& container, int find)
{
    typename T::iterator it;
    it = std::find(container.begin(),container.end(),find);
    if (it == container.end())
    {
        throw std::runtime_error("failure !! element not exist in container");
    }
}

#endif