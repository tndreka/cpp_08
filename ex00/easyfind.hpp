/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:06:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 07:33:59 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector> // for vector container
#include <list>

class Nomatch:public std::exception
{
    public:
        const char* what() const noexcept
        {
            return "No match found! ";
        }
};



template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    for (typename T::iterator i = container.begin(); i != container.end(); ++i)
        {
            if (*i == value)
            {
                return i;
            }
        }
        throw Nomatch();
}

#endif