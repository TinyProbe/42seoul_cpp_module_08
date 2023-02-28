/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:02:32 by tkong             #+#    #+#             */
/*   Updated: 2023/02/28 16:27:35 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>

size_t Span::findSpan(bool isLong) const {
	if ((int) this->v.size() < 2) {
		throw std::runtime_error("Can't enough amount of element such a compare");
	}
	size_t rtn = (isLong ? 0 : UINT_MAX);
	for (int i = 1; i < (int) this->v.size(); ++i) {
		int sign = (v[i - 1] < 0 == v[i] < 0 ? -1 : 1);
		size_t tmp = std::max(std::abs(this->v[i - 1]), std::abs(this->v[i]));
		tmp += sign * std::min(std::abs(this->v[i - 1]), std::abs(this->v[i]));
		rtn = (isLong ? std::max(rtn, tmp) : std::min(rtn, tmp));
	}
	return rtn;
}

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
	if (this->v.size() + 1 > this->N) {
		throw std::runtime_error("There is no place add something anymore");
	}
	this->v.push_back(n);
}
void Span::addNumbers(std::vector<int>::iterator b, std::vector<int>::iterator e) {
	if (this->v.size() + (e - b) > this->N) {
		throw std::runtime_error("There is no place add something anymore");
	}
	this->v.insert(this->end(), b, e);
}
size_t Span::shortestSpan() const { return Span::findSpan(false); }
size_t Span::longestSpan() const { return Span::findSpan(true); }
std::vector<int>::iterator Span::begin() { return this->v.begin(); }
std::vector<int>::iterator Span::end() { return this->v.end(); }
