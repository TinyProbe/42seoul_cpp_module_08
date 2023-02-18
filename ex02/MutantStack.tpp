/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:04:10 by tkong             #+#    #+#             */
/*   Updated: 2023/02/18 23:04:10 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T>
MutantStack<T>::MutantStack() : std::stack<T, container_type >() {}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& rhs) : std::stack<T, container_type >(rhs) {}

template <class T>
MutantStack<T>::~MutantStack() {}

template <class T>
MutantStack<T>::operator std::stack<T>() const {
	return std::stack<T>(std::deque<T>(this->c.begin(), this->c.end()));
}

template <class T>
typename MutantStack<T>::iterator               MutantStack<T>::begin()         _NOEXCEPT {return this->c.begin();}
template <class T>
typename MutantStack<T>::const_iterator         MutantStack<T>::begin()   const _NOEXCEPT {return this->c.begin();}
template <class T>
typename MutantStack<T>::iterator               MutantStack<T>::end()           _NOEXCEPT {return this->c.end();}
template <class T>
typename MutantStack<T>::const_iterator         MutantStack<T>::end()     const _NOEXCEPT {return this->c.end();}
template <class T>
typename MutantStack<T>::reverse_iterator       MutantStack<T>::rbegin()        _NOEXCEPT {return this->c.reverse_iterator(this->c.end());}
template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin()  const _NOEXCEPT {return this->c.const_reverse_iterator(this->c.end());}
template <class T>
typename MutantStack<T>::reverse_iterator       MutantStack<T>::rend()          _NOEXCEPT {return this->c.reverse_iterator(this->c.begin());}
template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend()    const _NOEXCEPT {return this->c.const_reverse_iterator(this->c.begin());}
template <class T>
typename MutantStack<T>::const_iterator         MutantStack<T>::cbegin()  const _NOEXCEPT {return this->c.begin();}
template <class T>
typename MutantStack<T>::const_iterator         MutantStack<T>::cend()    const _NOEXCEPT {return this->c.end();}
template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const _NOEXCEPT {return this->c.rbegin();}
template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend()   const _NOEXCEPT {return this->c.rend();}
