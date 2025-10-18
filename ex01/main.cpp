/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 04:57:39 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 10:31:53 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//Subject int main
// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     // sp.print_vect();
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }
/*
    OUTPUT:
    $> ./ex01
    2
    14
    $>
*/


/*
    Tests
*/

int main()
{
    try
    {
        Span one = Span(10000);
        std::srand(time(NULL));
        for (size_t i = 0; i < 10000; ++i)
        {
            one.addNumber(rand() % 10000);
        }
        std::cout << one.shortestSpan() << std::endl;
        std::cout <<one.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span two = Span(100000);
        std::srand(time(NULL));
        for (size_t i = 0; i < 100000; ++i)
        {
            two.addNumber(rand() % 100000);
        }
        std::cout << two.shortestSpan() << std::endl;
        std::cout << two.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}