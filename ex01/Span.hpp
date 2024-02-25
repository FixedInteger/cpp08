#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <exception>
#include <vector>

class Span{

    private:
    unsigned int n;
    std::vector<int> v;
    public :
    //constructor
        Span();
    //destructor
        ~Span();
    //parameterized constructor
        Span(unsigned int n);
    //copy constructor
        Span(const Span &src);
    //assignment operator
        Span &operator=(const Span &src);
    //add number
        void addNumber(int n);

    //shortest span
        int shortestSpan();
    //longest span
        int longestSpan();


};

#endif