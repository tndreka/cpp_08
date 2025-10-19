/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:04:01 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/19 19:31:12 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <deque>

template <typename T, class Container = std::deque<T>>
class MutantStack:public std::stack<T, Container>
{
    public:
        MutantStack() = default ;
        MutantStack(const MutantStack& other) = default;   
        MutantStack& operator=(const MutantStack& other) = default;
        ~MutantStack() = default;

        // using is = to typdef but c++11 standart
        using iterator = typename std::stack<T, Container>::container_type::iterator;
        
};

#endif