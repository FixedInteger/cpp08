#include "Span.hpp"

Span::Span() : n(0) {}

Span::Span(unsigned int n)  {
    if (n == 0)
        throw std::exception();

    else
        this->n = n;
    

}

Span::Span(const Span &src) {
    *this = src;
}

Span &Span::operator=(const Span &src) {
    if (this != &src)
        this->n = src.n;
    return *this;
}


Span::~Span() {}

void Span::addNumber(int n) 
{
    if (v.size() < this->n)
        v.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan() 
{
    if (v.size() < 2)
        throw std::exception();
    int min = INT_MAX;
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) 
    {
        for (std::vector<int>::iterator it2 = it + 1; it2 != v.end(); it2++) 
        {
            int diff = *it - *it2;
            if (diff < 0)
                diff *= -1;
            if (diff < min)
                min = diff;
        }
    }
    return min;

}

int Span::longestSpan() 
{
    if (v.size() < 2)
        throw std::exception();
    int min = INT_MAX;
    int max = INT_MIN;
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++) 
    {
        if (*it < min)
            min = *it;
        if (*it > max)
            max = *it;
    }
    return max - min;
}