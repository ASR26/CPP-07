/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:07:21 by asolano-          #+#    #+#             */
/*   Updated: 2023/11/22 09:10:23 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	increase(int &i)
{
	i++;
}
void count(std::string &s)
{
	std::cout << s.size() << std::endl;
}

int main( void ) {
	int a[5] = {1, 2, 3, 4, 5};
	std::string b[5] = {"abc", "asdg", "asdasd", "asdasdasdq", "acxcb"};

	iter(a, 5, increase);
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << std::endl;
	std::cout << std::endl;
	iter(b, 5, count);
}