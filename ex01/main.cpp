/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 04:57:39 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 09:15:22 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//Subject int main
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    //sp.addNumber(17);
    //sp.addNumber(9);
    //sp.addNumber(11);
    sp.print_vect();
    std::cout << sp.shortestSpan() << std::endl;
    //std::cout << sp.longestSpan() << std::endl;
    return 0;
}
/*
    OUTPUT:
    $> ./ex01
    2
    14
    $>
*/