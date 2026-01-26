#include "easyfind.hpp"
#include <vector>


int main()
{
    std::vector<int> v1(10);

    for (size_t i = 0; i < v1.size(); i++)
        v1[i] = i + 1;
    
    easyfind(v1,11);
    v1.push_back(11);
    easyfind(v1,11);

    return 0;
}