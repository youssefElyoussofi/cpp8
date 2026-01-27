#ifndef Span_hpp
#define Span_hpp
#include <vector>

class Span
{
    private:
        std::vector<unsigned int> data;
        unsigned int maxN;
    public:
        Span();
        Span(unsigned int max);
        Span(const Span& span);
        Span& operator=(const Span& span);
        ~Span();
        void addNumber(unsigned int nb);
        unsigned int longestSpan(void);
};

#endif