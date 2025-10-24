/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 04:58:21 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/24 20:58:31 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <limits>
#include <algorithm>
#include <cstdlib> 
class Span
{
private:
    std::vector<int> sp;
    unsigned int size;
    unsigned int count;
public:
    Span();
    Span(unsigned int n);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();
    //member functions
    void addNumber(int number);
    
    unsigned int shortestSpan();
    unsigned int longestSpan();
    //debug
    void print_vect() const;
    //Addnum range based.
    template <typename InputIterator>
    void addNumber(InputIterator begin, InputIterator end)
    {
        while (begin != end)
        {
            if(count >= size)
                throw Outofrange();
            sp.push_back(*begin);
            count++;
            ++begin;
        }
    }
    //helper function
    template<typename T>
    void insert(T first, T last)
    {
        size_t distance = std::distance(first, last);
        if(sp.size() + distance > size)
            throw Outofrange();
        sp.insert(sp.end(), first, last);
        count += distance;
    }
    //Exception cases
    class Outofrange:public std::exception
    {
        public:
            const char* what()const noexcept;  
    };
    class NoNumbers:public std::exception
    {
        public:
            const char* what()const noexcept;  
    };
    class OneNumber:public std::exception
    {
        public:
            const char* what()const noexcept;  
    };
};

#endif