/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 05:07:03 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/24 21:13:52 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : sp(), size(0), count(0)
{}

Span::Span(const Span& other): sp(other.sp), size(other.size), count(other.count)
{}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        sp = other.sp;
        size = other.size;
        count = other.count;
    }
    return *this;
}

Span::Span(unsigned int n) : sp(), size(n), count(0)
{}

Span::~Span()
{}

const char* Span::Outofrange::what() const noexcept
{
    return "Container is FULL!";
}

const char* Span::NoNumbers::what() const noexcept
{
    return "No Numbers in Container!";
}

const char* Span::OneNumber::what() const noexcept
{
    return "One Number in Container!";
}

void Span::addNumber(int number)
{
    if(count >= size)
        throw Outofrange();
    sp.push_back(number);
    count++;
}

//debug
void Span::print_vect()const
{
    for (unsigned int i = 0; i < count; i++)
    {
        std::cout << sp[i] << " ";
    }
    std::cout << std::endl;
}

unsigned int Span::shortestSpan()
{
    if(count == 0)
        throw NoNumbers();
    else if (count < 2)
        throw OneNumber();
    std::vector<int> sorted = sp;
    std::sort(sorted.begin(), sorted.end());
    
    unsigned int shortest_span= std::abs(sorted[1] - sorted[0]);
    for (unsigned int i = 2; i < count; i++)
    {
        unsigned int difference =std::abs(sorted[i] - sorted[i - 1]);
        if(difference < shortest_span)
            shortest_span = difference;
    }
    return shortest_span;
}

unsigned int Span::longestSpan()
{
    if (count == 0)
        throw NoNumbers();
    else if (count < 2)
        throw OneNumber();
    auto min_it = std::min_element(sp.begin(), sp.end());
    auto max_it = std::max_element(sp.begin(), sp.end());
    return std::abs(*max_it - *min_it); 
}