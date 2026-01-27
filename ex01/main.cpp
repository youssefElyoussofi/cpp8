#include "Span.hpp"
#include <iostream>

int main()
{
    Span s(100);

    try
    {
        for(size_t i = 50; i < 100;i++)
            s.addNumber(i);
        for(size_t i = 0; i < 30;i++)
            s.addNumber(i);
        for(size_t i = 900; i < 999;i++)
            s.addNumber(i);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        unsigned int longestSpan = s.longestSpan();
        std::cout << "the longest span is : " << longestSpan << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}