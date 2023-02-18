/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 09:29:25 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 21:58:27 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <class T>
typename T::const_iterator easyfind(const T& container, int target) {
	typename T::const_iterator it = container.cbegin();
	while (it != container.cend()) {
		if (*it == target) {
			break;
		}
		++it;
	}
	return it;
}

#endif
