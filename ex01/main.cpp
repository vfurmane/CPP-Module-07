/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:02:07 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/08 17:57:07 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	ft_double(int &nbr)
{
	nbr *= 2;
}

int	main(void)
{
	int	arr[] = {42, 21, 100, 1337, 0};
	iter(arr, 5, ft_double);
	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;
	return 0;
}
