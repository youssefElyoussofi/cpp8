#include "Span.hpp"
#include <iostream>

int main()
{
    Span s(20000);

    try
    {
        for (size_t i = 0; i < 4000; i += 5)
            s.addNumber(i);
        for (size_t i = 4000; i < 40000; i += 6)
            s.addNumber(i);
        for (int i = -5000; i < 0; i += 8)
            s.addNumber(i);
        for (size_t i = 50000; i < 900000; i += 7)
            s.addNumber(i);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        unsigned int longestSpan = s.longestSpan();
        std::cout << "the longest span is : " << longestSpan << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        unsigned int longestSpan = s.shortestSpan();
        std::cout << "the shortest span is : " << longestSpan << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}