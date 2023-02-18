/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:02:32 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 22:30:46 by tkong            ###   ########.fr       */
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

public:
	Span();
	Span(const Span& rhs);
	Span(size_t N);
	virtual ~Span();
	virtual Span& operator=(const Span& rhs);

	virtual void addNumber(int n);
	virtual void addNumbers(int n, int amount);
	virtual int shortestSpan() const;
	virtual int longestSpan() const;

};

#endif
