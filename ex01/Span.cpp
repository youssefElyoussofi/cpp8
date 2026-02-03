#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span():maxN(0)
{

}

Span::Span(unsigned int max):maxN(max)
{

}

Span::Span(const Span& span):data(span.data),maxN(span.maxN)
{

}

Span::~Span()
{

}

Span &Span::operator=(const Span &span)
{
    if (this != &span)
    {
        this->maxN = span.maxN;
        this->data = span.data;    
    }
    return *this;
}

void Span::addNumber(int nb)
{
    if (this->maxN == this->data.size())
        throw std::out_of_range("cannot add single number the range out of max possible");
    this->data.push_back(nb);
}

unsigned int Span::longestSpan(void) 
{
    if (this->data.size() <= 1)
    {
        throw std::out_of_range("no enough numbers to found longest span");
    }
    int max = *std::max_element(data.begin(),data.end());
    int min = *std::min_element(data.begin(),data.end());
    return (max - min);
}

unsigned int Span::shortestSpan(void) 
{
    if (data.size() <= 1)
        throw std::out_of_range("no enough numbers to found shortest span");
    std::vector<int> tmp = this->data;
    std::sort(tmp.begin(),tmp.end());
    unsigned int shortest = *(tmp.begin() + 1) - *(tmp.begin());
    unsigned int current = shortest;
    for (std::vector<int>::iterator it = tmp.begin(); it + 1 != tmp.end(); it++)
    {
        current = *(it + 1) - *it;
        if (current < shortest)
            shortest = current;
    }
    return shortest;
}


void Span::addMultiNumbers(std::vector<int>::iterator It1,std::vector<int>::iterator It2)
{
   size_t dst = std::distance(It1,It2);
   if (data.size() + dst > this->maxN)
   {
       throw std::out_of_range("cannot add multipe numbers the Span is full");
   }
    data.insert(data.end(),It1,It2);
}