/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:03:28 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/19 20:05:19 by tndreka          ###   ########.fr       */
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
    std::cout << "======== TEST CASE 2 ===============\n";
    MutantStack<int> unit;
    for (int i = 0; i < 8; i++)
    {
        unit.push(i * 5);
    }
    MutantStack<int>::iterator j = unit.begin();
    for (; j != unit.end(); ++j)
    {
        std::cout << *j <<" ";
    }
    std::cout<<std::endl;
    std::cout << "======== TEST CASE 3 ===============\n";
    MutantStack<int> gs;
    gs.push(1);
    gs.push(2);
    MutantStack<int> cp(gs);
    //auto is the keyword that the compailer get automaticly what type are we dealing with
    for (auto i = cp.begin(); i != cp.end(); ++i)
    {
        std::cout << *i <<" ";
    }
    std::cout<<std::endl;
    //now the compiler will go and check cp.begin() that returns a Mutantstack<int>::iterator so it replaces it automatically
    MutantStack<int> a;
    a = gs;
    for (auto i = a.begin(); i != a.end(); ++i)
    {
        std::cout << *i <<" ";
    }
    std::cout<<std::endl;
    std::cout << "======== TEST CASE 4 ===============\n";
    MutantStack<int> ennd;
    gs.push(111);
    gs.push(222);
    MutantStack<int> one(ennd);
    for(int i = 1; i < 8; i++) 
        one.push(i * (i *i));
    for (auto i = one.begin(); i != one.end(); ++i)
    {
        std::cout << *i <<" ";
    }
    std::cout<<std::endl;    
    std::cout << "The top element in the stack is: " << one.top() << std::endl;
    one.pop();
    std::cout << "The top element in the stack is after pop(): " << one.top() << std::endl;
    std::cout << "The size in the stack is: " << one.size() << std::endl;    
    return 0;
}
