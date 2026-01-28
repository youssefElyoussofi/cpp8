#include "Span.hpp"
#include <bits/stdc++.h>
#include <algorithm>

Span::Span():data(0),maxN(0)
{

}

Span::Span(unsigned int max):data(0),maxN(max)
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
    if (this == &span)
        return *this;
    this->maxN = span.maxN;
    this->data = span.data;
    
    return *this;
}

void Span::addNumber(int nb)
{
    if (this->maxN == this->data.size())
        throw std::out_of_range("the numbers stored hit the max possible");
    this->data.push_back(nb);
}

unsigned int Span::longestSpan(void) 
{
    if (this->data.size() <= 1)
        throw std::out_of_range("no enough numbers to found longest span");
    
    int max = *std::max_element(data.begin(),data.end());
    int min = *std::min_element(data.begin(),data.end());
    return (max - min);
}

unsigned int Span::shortestSpan(void) 
{
    if (data.size() <= 1)
        throw std::out_of_range("no enough numbers to found shortest span");
    std::sort(data.begin(),data.end());
    unsigned int shortest = *(data.begin() + 1) - *(data.begin());
    unsigned int current = shortest;
    for (std::vector<int>::iterator it = data.begin(); it + 1 != data.end(); it++)
    {
        current = *(it + 1) - *it;
        if (current < shortest)
            shortest = current;
    }
    return shortest;
}


void Span::addNumber(std::vector<int>::iterator firstIt,std::vector<int>::iterator secondIt)
{
   
}