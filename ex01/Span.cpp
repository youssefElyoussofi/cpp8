#include "Span.hpp"

Span::Span():data(0)
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

}