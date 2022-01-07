/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:49:45 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/07 16:17:30 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &arg1, T &arg2)
{
	T	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template<typename T>
const T	&min(const T &arg1, const T &arg2)
{
	return arg1 < arg2 ? arg1 : arg2;
}

template<typename T>
const T	&max(const T &arg1, const T &arg2)
{
	return arg1 > arg2 ? arg1 : arg2;
}

#endif
