/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:04:09 by tkong             #+#    #+#             */
/*   Updated: 2023/02/19 06:14:57 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	for (int i = 0; i < 1000; ++i) {
		mstack.push(i);
	}
	std::cout << "size: " << mstack.size() << std::endl;
	for (int i = 0; i < 990; ++i) {
		mstack.pop();
	}
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "s:\n";
	while (!s.empty()) {
		std::cout << s.top() << '\n';
		s.pop();
	}
}
