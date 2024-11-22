/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:15:27 by kammi             #+#    #+#             */
/*   Updated: 2024/11/19 17:18:44 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap: default constructor called" << std::endl;

}
ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap: Param constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	*this = copy;
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap	& ClapTrap::operator=(ClapTrap const &o)
{
	std::cout << "ClapTrap: Assignation operator called" << std::endl;
	if (this != &o)
	{
		this->_name = o.getName();
		this->_hitPoints = o.getHitPoints();
		this->_energyPoints = o.getEnergyPoints();
		this->_attackDamage = o.getAttackDamage();
	}
	return *this;
}


void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints && _hitPoints)
	{
		std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (!_energyPoints)
	{
		std::cout << "No enought energy points!" << std::endl;
	}
	else
	{
		std::cout << "No enought hit points!" << std::endl;
	}

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hitPoints)
	{
		std::cout << "ClapTrap "  << _name << " is already dead !" << std::endl;
	}
	else if (amount >= _hitPoints)
	{
		std::cout << "ClapTrap "  << _name << " is killed by " << amount << " of damage!" << std::endl;
		_hitPoints = 0;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap "  << _name << " take " << amount << " points of damage! He has now " << _hitPoints << " hit points." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoints)
	{
		std::cout << "ClapTrap "  << _name << " is out of energy! " << std::endl;
	}
	else if (!_hitPoints)
	{
		std::cout << "ClapTrap " <<  _name << " is already dead! " << std::endl;
	}
	else
	{
		_hitPoints += amount;
		std::cout << "ClapTrap "  << _name << " was repaired of " << amount << " points. He has now : " << _hitPoints << " hit points." << std::endl;
		_energyPoints--;
	}
}

//getters
std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}



