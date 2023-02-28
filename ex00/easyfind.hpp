/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:29:25 by tkong             #+#    #+#             */
/*   Updated: 2023/02/28 11:01:19 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

extern int g_value;

bool pred(int elem) { return elem == g_value; }

template <class T>
typename T::const_iterator easyfind(const T& container, int target) {
	g_value = target;
	return std::find_if(container.begin(), container.end(), pred);
}

#endif
