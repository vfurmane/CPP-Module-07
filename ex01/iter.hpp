/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:02:18 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/04 08:51:21 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template<typename T>
void	iter(T *arr, size_t len, void (*fct)(T &))
{
	for (size_t i = 0; i < len; i++)
		fct(arr[i]);
}

template<typename T>
void	iter(T *arr, size_t len, void (*fct)(const T &))
{
	for (size_t i = 0; i < len; i++)
		fct(arr[i]);
}

#endif
