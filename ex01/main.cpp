/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 04:57:39 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 11:02:00 by tndreka          ###   ########.fr       */
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
        std::cout << "======== Test 10,000 ==============\n";
        std::srand(time(NULL));
        Span one = Span(10000);
        std::vector<int> v1(10000);
        for(size_t i = 0; i < v1.size(); i++)
            v1[i] = rand() % 10000;
        one.insert(v1.begin(), v1.end());
        std::cout << one.shortestSpan() << std::endl;
        std::cout <<one.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "======== Test 100,000 ==============\n";
        std::srand(time(NULL));
        Span one = Span(50000);
        std::vector<int> v1(50000);
        for(size_t i = 0; i < v1.size(); i++)
            v1[i] = rand() % 50000;
        one.insert(v1.begin(), v1.end());
        std::cout << one.shortestSpan() << std::endl;
        std::cout <<one.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}