/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:03:28 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/19 19:44:14 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int main()
{
    std::cout << "======== SUBJECT TEST CASE ===============\n";
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "======== TEST CASE 1 ===============\n";
    MutantStack<int> ss;
    ss.push(0);
    ss.push(1);
    ss.push(2);
    ss.push(3);
    ss.push(4);
    std::cout << "The top element in the stack is: " << ss.top() << std::endl;
    ss.pop();
    std::cout << "The top element in the stack is after pop(): " << ss.top() << std::endl;
    std::cout << "The size in the stack is: " << ss.size() << std::endl;
    
    return 0;
}
