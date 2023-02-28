/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:02:31 by tkong             #+#    #+#             */
/*   Updated: 2023/02/28 16:30:33 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

#define MAX_LEN 20000

int main()
{
	Span sp = Span(5);
	sp.addNumber(INT_MIN);
	sp.addNumber(INT_MAX);
	sp.addNumber(14);
	sp.addNumber(52);
	sp.addNumber(116);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try {
		sp.addNumber(30);
	} catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}
	Span sp2(MAX_LEN + (sp.end() - sp.begin()));
	for (int i = 0; i < MAX_LEN; ++i) {
		sp2.addNumber(i * 1234567);
	}
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	sp2.addNumbers(sp.begin(), sp.end());
}
