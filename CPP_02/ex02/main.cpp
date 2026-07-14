/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 22:00:58 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/13 22:25:56 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f));
	Fixed const c(Fixed(2));

	std::cout << "a is " << a <<std::endl;
	std::cout << "b is " << b <<std::endl;
	std::cout << "c is " << c <<std::endl;

	std::cout << "a is " << a.toInt() << " as interger"  <<std::endl;
	std::cout << "b is " << b.toInt() << " as interger"  <<std::endl;
	std::cout << "c is " << c.toInt() << " as interger"  <<std::endl;

	std::cout << "b + c is " << b + c << std::endl;
	std::cout << "b - c is " << b - c << std::endl;
	std::cout << "b * c is " << b * c << std::endl;
	std::cout << "b / c is " << b / c << std::endl;

	Fixed d(b);

	std::cout << "d is " << d << std::endl;
	std::cout << "d == b : " << (d == b) << std::endl;
	std::cout << "d == c : " << (d == c) << std::endl;

	return (0);
}
