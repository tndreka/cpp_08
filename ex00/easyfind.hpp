/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:06:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 02:56:21 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector> // for vector container

class Nomatch:public std::exception
{
    const char* what() noexcept
    {
        return "No match found! ";
    }
};



template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

#endif