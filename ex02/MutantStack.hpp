/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:04:10 by tkong             #+#    #+#             */
/*   Updated: 2023/02/19 06:25:37 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>

template <class T>
class MutantStack : public std::stack<T, std::vector<T> > {

public:
	typedef typename MutantStack::container_type			container_type;
	typedef typename container_type::__self					__self;
	typedef typename container_type::value_type				value_type;
	typedef typename container_type::allocator_type			allocator_type;
	typedef typename container_type::__alloc_traits			__alloc_traits;
	typedef typename container_type::reference				reference;
	typedef typename container_type::const_reference		const_reference;
	typedef typename container_type::size_type				size_type;
	typedef typename container_type::difference_type		difference_type;
	typedef typename container_type::pointer				pointer;
	typedef typename container_type::const_pointer			const_pointer;
	typedef typename container_type::iterator				iterator;
	typedef typename container_type::const_iterator			const_iterator;
	typedef typename container_type::reverse_iterator		reverse_iterator;
	typedef typename container_type::const_reverse_iterator	const_reverse_iterator;

public:
	MutantStack();
	MutantStack(const MutantStack& rhs);
	virtual ~MutantStack();
	virtual operator std::stack<T>() const;

	iterator               begin()         _NOEXCEPT;
	const_iterator         begin()   const _NOEXCEPT;
	iterator               end()           _NOEXCEPT;
	const_iterator         end()     const _NOEXCEPT;
	reverse_iterator       rbegin()        _NOEXCEPT;
	const_reverse_iterator rbegin()  const _NOEXCEPT;
	reverse_iterator       rend()          _NOEXCEPT;
	const_reverse_iterator rend()    const _NOEXCEPT;
	const_iterator         cbegin()  const _NOEXCEPT;
	const_iterator         cend()    const _NOEXCEPT;
	const_reverse_iterator crbegin() const _NOEXCEPT;
	const_reverse_iterator crend()   const _NOEXCEPT;

};

#include "MutantStack.tpp"

#endif
