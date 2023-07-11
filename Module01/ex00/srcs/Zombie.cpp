// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   Zombie.cpp                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: lsalin <marvin@42.fr>                      +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/01/06 11:35:05 by lsalin            #+#    #+#             */
// /*   Updated: 2023/01/06 11:48:06 by lsalin           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) 
{
	std::cout << "A zombie appeared!" << std::endl;
	return;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "A zombie named " << this->_getName() << " appeared!" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_getName() << " is dead (rip)" << std::endl;
	return ;
}

std::string Zombie::_getName(void) const
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << this->_getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
