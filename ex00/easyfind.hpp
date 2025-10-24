/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:06:14 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/24 20:48:40 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector> // for vector container
#include <list>
#include <algorithm>//for std::find()
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
	typename T::iterator it = std::find(container.begin(), container.end(), value);
    //for (typename T::iterator i = container.begin(); i != container.end(); ++i)
        //{
            if (it == container.end())
            {
                throw Nomatch();
            }
        //}
        return it;
}

#endif
