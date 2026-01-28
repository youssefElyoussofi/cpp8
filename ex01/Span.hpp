#ifndef Span_hpp
#define Span_hpp
#include <vector>

class Span
{
    private:
        std::vector<int> data;
        unsigned int maxN;
    public:
        Span();
        Span(unsigned int max);
        Span(const Span& span);
        Span& operator=(const Span& span);
        ~Span();
        void addNumber(int nb);
        unsigned int longestSpan(void);
        unsigned int shortestSpan(void);
        void addNumber(std::vector<int>::iterator firstIt,std::vector<int>::iterator secondIt);
};

#endif