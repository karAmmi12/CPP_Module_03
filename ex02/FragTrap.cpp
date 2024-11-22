/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:15:30 by kammi             #+#    #+#             */
/*   Updated: 2024/11/19 17:25:16 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap: default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap: Param constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy)
{
	std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap	& FragTrap::operator=(FragTrap const &o)
{
	std::cout << "FragTrap: Assignation operator called" << std::endl;
	if (this != &o)
	{
		ClapTrap::operator=(o);
	}
	return *this;
}

void	FragTrap::attack(const std::string &target)
{
	if (_energyPoints && _hitPoints)
	{
		std::cout << "FragTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (!_energyPoints)
	{
		std::cout << "No enought energy points!" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << ": high fives guys!" << std::endl;

}
