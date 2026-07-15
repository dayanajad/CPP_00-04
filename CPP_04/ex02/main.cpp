/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 02:14:34 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 05:29:21 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
//	AAnimal generic; - would not compile: cannot declare var of abstract type 'AAnimal'
	AAnimal *zoo[6];

	for (int i = 0; i < 3; i++)
		zoo[i] = new Dog();
	for (int i = 3; i < 6; i++)
		zoo[i] = new Cat();
	for (int i = 0; i < 6; i++)
		zoo[i]->makeSound();
	
	Dog dogOriginal;
	dogOriginal.getBrain()->setIdea(0, "before copy"); 
	Dog dogCopy(dogOriginal);
	dogOriginal.getBrain()->setIdea(0, "after copy");

	std::cout << "Dog original idea[0]: " << dogOriginal.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog copy idea[0]: " << dogCopy.getBrain()->getIdea(0) << std::endl;

	Cat catOriginal;
    catOriginal.getBrain()->setIdea(0, "before copy");
    Cat catCopy(catOriginal);
    catOriginal.getBrain()->setIdea(0, "after copy");

    std::cout << "Cat original idea[0]: " << catOriginal.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat copy idea[0]: " << catCopy.getBrain()->getIdea(0) << std::endl;

	for (int i = 0; i < 6; i++)
		delete zoo[i];

	return(0);
}
