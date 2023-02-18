/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:02:32 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 22:59:44 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N() {}
Span::Span(const Span& rhs) : N() { *this = rhs; }
Span::Span(size_t N) : N(N) {}
Span::~Span() {}
Span& Span::operator=(const Span& rhs) {
	if (this == &rhs) {
		return *this;
	}
	this->v = rhs.v;
	const_cast<size_t&>(this->N) = rhs.N;
	return *this;
}

void Span::addNumber(int n) {
	if (this->v.size() >= this->N) {
		throw std::runtime_error("There is no place add something anymore");
	}
	this->v.push_back(n);
}
void Span::addNumbers(int n, int amount) {
	try {
		for (int i = 0; i < amount; ++i) {
			this->addNumber(n);
		}
	} catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}
}
int Span::shortestSpan() const {
	if ((int) this->v.size() < 2) {
		throw std::runtime_error("Can't enough amount of element such a compare");
	}
	int rtn = 1e9;
	for (int i = 1; i < (int) this->v.size(); ++i) {
		rtn = std::min(rtn, std::abs(this->v[i - 1] - this->v[i]));
	}
	return rtn;
}
int Span::longestSpan() const {
	if ((int) this->v.size() < 2) {
		throw std::runtime_error("Can't enough amount of element such a compare");
	}
	int rtn = 0;
	for (int i = 1; i < (int) this->v.size(); ++i) {
		rtn = std::max(rtn, std::abs(this->v[i - 1] - this->v[i]));
	}
	return rtn;
}
