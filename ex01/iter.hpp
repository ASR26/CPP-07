/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:58:16 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/22 11:52:03 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>

void iter(T *array, int length, void (*func)(T&))
{
	for (int i = 0; i < length; i++)
		func(array[i]);
}
template <typename T>

void iter(T *array, int length, void (*func)(const T&))
{
	for (int i = 0; i < length; i++)
		func(array[i]);
}

#endif