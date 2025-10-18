/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 04:58:21 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 07:11:21 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

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
    //Exception cases
    class Outofrange:public std::exception
    {
      const char* what()const noexcept;  
    };
    class NoNumbers:public std::exception
    {
      const char* what() const noexcept;  
    };
    class NoSpanFounded:public std::exception
    {
      const char* what() const noexcept;  
    };
    class OneNumber:public std::exception
    {
      const char* what() const noexcept;  
    };
};

#endif