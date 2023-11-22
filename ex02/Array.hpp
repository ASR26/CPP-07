/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:58:16 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/22 11:40:28 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class Array
{
	private:
		unsigned int _n;
		T *arr;
	public:
		Array();
		Array(const Array &copy);
		Array &operator=(const Array &copy);
		~Array();

		Array(unsigned int n);
		T &operator[](unsigned int i) const;
		unsigned int size() const;
};

# include "Array.tpp"
#endif