/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:29:24 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 21:59:52 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main() {
	std::vector<int> v(10);
	for (int i = 0; i < (int) v.size(); ++i) {
		v[i] = i;
	}
	for (int i = 0; i < (int) v.size() + 5; ++i) {
		std::vector<int>::const_iterator it =  easyfind(v, i);
		if (it != v.end()) {
			std::cout << *it << '\n';
		} else {
			std::cout << "Not exist\n";
		}
	}
}
