#include "Span.hpp"
#include <bits/stdc++.h>
#include <algorithm>

Span::Span():data(0),maxN(0)
{

}

Span::Span(unsigned int max):data(0),maxN(max)
{

}

Span::Span(const Span& span):data(span.data.size()),maxN(span.maxN)
{
    this->data = span.data;
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

void Span::addNumber(unsigned int nb)
{
    if (this->maxN == this->data.size())
        throw std::out_of_range("the numbers stored hit the max possible");
    this->data.push_back(nb);
}

unsigned int Span::longestSpan(void)
{
    if (this->maxN <= 1)
        throw std::out_of_range("no enough numbers to found longest span");
    
    unsigned int max = *std::max_element(data.begin(),data.end());
    unsigned int min = *std::min_element(data.begin(),data.end());
    return (max - min);
}