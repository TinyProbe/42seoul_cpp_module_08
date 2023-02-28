/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:02:32 by tkong             #+#    #+#             */
/*   Updated: 2023/02/28 16:11:54 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	const size_t N;
	std::vector<int> v;

	virtual size_t findSpan(bool isLong) const;

public:
	Span();
	Span(const Span& rhs);
	Span(size_t N);
	virtual ~Span();
	virtual Span& operator=(const Span& rhs);

	virtual void addNumber(int n);
	virtual void addNumbers(std::vector<int>::iterator b, std::vector<int>::iterator e);
	virtual size_t shortestSpan() const;
	virtual size_t longestSpan() const;
	virtual std::vector<int>::iterator begin();
	virtual std::vector<int>::iterator end();

};

#endif
