#include "Span.hpp"
#include <iostream>




int main()
{
    Span sp1 = Span(5);
    sp1.addNumber(6);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(9);
    sp1.addNumber(11);
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;

    std::vector<int> test(5000);
    for (size_t i = 0, len = test.size(); i < len; i++)
    {
        test.at(i) = i + 5;
    }

    Span sp2(5000);
    try
    {
        sp2.addMultiNumbers(test.begin(),test.end());
        sp2.addMultiNumbers(test.begin(),test.end());
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}