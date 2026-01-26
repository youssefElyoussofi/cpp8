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
    print(v);
    easyfind(v,11);
    v.push_back(11);
    print<std::vector<int> >(v);
    easyfind(v,11);

    std::list<int> l(5,4);
    print(l);
    easyfind(v,12);
    l.push_front(12);
    print(l);
    easyfind(l,12);

    return 0;
}