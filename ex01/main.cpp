/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:02:07 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/04 08:51:36 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void    ft_double(int &nbr)
{
	std::cout << nbr << std::endl;
}

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}

// int     main(void)
// {
// 	int     arr[] = {42, 21, 100, 1337, 0};
// 	iter(arr, 5, ft_double);
// 	for (int i = 0; i < 5; i++)
// 	        std::cout << arr[i] << std::endl;
// 	return 0;
// }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}
