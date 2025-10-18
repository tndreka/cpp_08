/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:51:31 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 04:45:00 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    
    try
    {
        
        std::cout << "================= TEST 1 ================\n";
        std::vector<int> nums = {10, 11, 22, 33, 44, 55, 66, 77, 7, 8, 9, 99, 88, 77, 100};
        ::easyfind(nums, 111);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "================= TEST 2 ================\n";
    try
    {
        std::vector<int> num = {10, 11, 22, 33, 44, 55, 66, 77,99, 88, 77, 100};
        std::vector<int>::iterator res = easyfind(num, 100);
        std::cout<< "RES: " << *res << std::endl;
        std::vector<int>::iterator res1 = easyfind(num, 1);
        std::cout<< "RES: " << *res1 << std::endl;    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}