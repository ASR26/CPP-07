/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:58:16 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/22 11:46:40 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_n = 0;
	arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_n = n;
	arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	_n = copy._n;
	arr = new T[_n];
	for (unsigned int i = 0; i < copy.size(); i++)
		this->arr[i] = copy.arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	this->_n = copy._n;
	if (this->arr)
		delete this->arr;
	this->arr = new T[copy.size()];
	for (unsigned int i = 0; i < copy.size(); i++)
		this->arr[i] = copy.arr[i];
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
	if (this->size() <= i || i < 0)
		throw std::runtime_error("Exception - Index out of bounds");
	else
		return this->arr[i];
}


template <typename T>
unsigned int	Array<T>::size() const
{
	return this->_n;
}

template <typename T>
Array<T>::~Array()
{
	if (this->arr)
		delete this->arr;
}