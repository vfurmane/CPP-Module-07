/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:45:03 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/09 12:13:19 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <exception>

template<typename T>
class Array
{
	public:
		Array(void) : _arr(NULL), _size(0)
		{
		}
		~Array(void)
		{
			delete [] _arr;
		}
		Array(const Array &obj) : _arr(NULL), _size(0)
		{
			*this = obj;
		}
		Array(unsigned int n) : _arr(new T[n]), _size(n)
		{
		}

		Array	&operator=(const Array &rhs)
		{
			delete [] _arr;
			_size = rhs.size();
			_arr = new T[_size];
			for (size_t i = 0; i < rhs.size(); i++)
				_arr[i] = rhs[i];
			return *this;
		}

		T		&operator[](size_t i)
		{
			if (i >= _size)
				throw std::exception();
			return _arr[i];
		}
		T		operator[](size_t i) const
		{
			if (i >= _size)
				throw std::exception();
			return _arr[i];
		}
		
		size_t	size(void) const
		{
			return _size;
		}

	private:
		T		*_arr;
		size_t	_size;
};

#endif
