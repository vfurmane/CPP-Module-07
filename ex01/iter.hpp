/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:02:18 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/08 17:55:29 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template<typename T, typename U>
void	iter(T *arr, size_t len, U *fct)
{
	for (size_t i = 0; i < len; i++)
		fct(arr[i]);
}

#endif
