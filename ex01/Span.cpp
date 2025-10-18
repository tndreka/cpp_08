/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 05:07:03 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 10:54:04 by tndreka          ###   ########.fr       */
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
    unsigned int shortest;
    if(count == 0)
        throw NoNumbers();
    else if (count < 2)
        throw OneNumber();
    //check first pair
    if (sp[0] > sp[1])
        shortest = sp[0] - sp[1];
    else
        shortest = sp[1] - sp[0];
    //all pairs
    for (unsigned int i = 0; i < count; i++)
    {
        for (unsigned int j = i + 1; j < count; j++)
        {
            unsigned int difference;
            if(sp[i] > sp[j])
                difference = sp[i] - sp[j];
            else
                difference = sp[j] - sp[i];
            if(difference < shortest)
                shortest = difference;
        }
        
    }
    return shortest;
}

unsigned int Span::longestSpan()
{
    unsigned int longest;
    if (count == 0)
        throw NoNumbers();
    else if (count < 2)
        throw OneNumber();
    //check first pair
    if (sp[0] > sp[1])
        longest = sp[0] - sp[1];
    else
        longest = sp[1] - sp[0];
    for (unsigned int i = 0; i < count; i++)
    {
        for (unsigned int j = i + 1; j < count; j++)
        {
            unsigned int diff;
            if(sp[i] > sp[j])
                diff = sp[i] - sp[j];
            else
                diff = sp[j] - sp[i];
            if(diff > longest)
                longest = diff;
        }
    }
    return longest;
}