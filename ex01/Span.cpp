/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 05:07:03 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 08:59:32 by tndreka          ###   ########.fr       */
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

const char* Span::NoSpanFounded::what() const noexcept
{
    return "No Span is Found!";
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